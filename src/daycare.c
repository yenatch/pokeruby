#include "global.h"
#include "daycare.h"
#include "pokemon.h"
#include "event_data.h"
#include "species.h"
#include "items.h"
#include "text.h"
#include "string_util.h"
#include "mail_data.h"
#include "name_string_util.h"
#include "pokemon_storage_system.h"
#include "rng.h"
#include "moves.h"
#include "strings2.h"
#include "data/pokemon/egg_moves.h"
#include "party_menu.h"

const u8 *const gUnknown_08209AC4[] = {
    DaycareText_GetAlongVeryWell,
    DaycareText_GetAlong,
    DaycareText_DontLikeOther,
    DaycareText_PlayOther
};

const u8 gUnknown_08209AD4[] = _("タマゴ");

extern u8 gLastFieldPokeMenuOpened;

u8 *GetMonNick(struct Pokemon *mon, u8 *dest)
{
    s8 nickname[POKEMON_NAME_LENGTH * 2];

    GetMonData(mon, MON_DATA_NICKNAME, nickname);
    return StringCopy10(dest, nickname);
}

u8 *GetBoxMonNick(struct BoxPokemon *mon, u8 *dest)
{
    s8 nickname[POKEMON_NAME_LENGTH * 2];

    GetBoxMonData(mon, MON_DATA_NICKNAME, nickname);
    return StringCopy10(dest, nickname);
}

u8 Daycare_CountPokemon(struct BoxPokemon *daycare_data)
{
    u8 i, count;
    count = 0;

    for(i = 0;i <= 1;i++)
        if(GetBoxMonData(daycare_data + i, MON_DATA_SPECIES) != 0)
            count++;

    return count;
}

void sub_8041324(struct BoxPokemon * box_pokemon, struct DayCareMailEtc * void_pointer)
{
    u8 i;
    u8 specCount;
    specCount = 0;
    for (i=0; i<2; i++)
    {
        if (GetBoxMonData(&box_pokemon[i], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            specCount ++;
            if (GetBoxMonData(&box_pokemon[i], MON_DATA_HELD_ITEM) == ITEM_NONE)
            {
                void_pointer->extra.rc.unk74[i] = 0;
            } else
            {
                void_pointer->extra.rc.unk74[i] = 1;
            }
        } else
        {
            void_pointer->extra.rc.unk74[i] = 1;
        }
    }
    void_pointer->extra.rc.unk70 = specCount;
}

s8 Daycare_FindEmptySpot(struct BoxPokemon * daycare_data)
{
    u8 i;

    for(i = 0;i <= 1;i++)
        if(GetBoxMonData(daycare_data + i, MON_DATA_SPECIES) == 0)
            return i;

    return -1;
}

void Daycare_SendPokemon(struct Pokemon * mon, struct DayCareData * daycare_data){ // unfinished
    s8 empty_slot;
    u8 mail;
    u8 *names;

    empty_slot = Daycare_FindEmptySpot(daycare_data->mons);
    if(MonHasMail(mon)) {
        StringCopy((names = daycare_data->mail.data[empty_slot].names), gSaveBlock2.playerName);
        PadNameString(names, 0xFC);
        names += 8;
        GetMonNick(mon, names);
        mail = GetMonData(mon, MON_DATA_MAIL);
        daycare_data->mail.data[empty_slot].mail = gSaveBlock1.mail[mail];
        TakeMailFromMon(mon);
    }
    daycare_data->mons[empty_slot] = mon->box;
    BoxMonRestorePP(&daycare_data->mons[empty_slot]);
    daycare_data->mail.extra.steps[empty_slot] = 0;
    ZeroMonData(mon);
    party_compaction();
    CalculatePlayerPartyCount();
}

void Daycare_SendPokemon_Special()
{
    Daycare_SendPokemon(gPlayerParty + gLastFieldPokeMenuOpened, &gSaveBlock1.daycareData);
}

void sub_80417F4(struct DayCareMail *);

void sub_80414C0(struct DayCareData * daycare_data)
{
    if((GetBoxMonData(&daycare_data->mons[1], MON_DATA_SPECIES) != 0) && GetBoxMonData(&daycare_data->mons[0], MON_DATA_SPECIES) == 0)
    {
        daycare_data->mons[0] = daycare_data->mons[1];
        ZeroBoxMonData(&daycare_data->mons[1]);
        daycare_data->mail.data[0] = daycare_data->mail.data[1];
        daycare_data->mail.extra.steps[0] = daycare_data->mail.extra.steps[1];
        daycare_data->mail.extra.steps[1] = 0;
        sub_80417F4(&daycare_data->mail.data[1]);
    }
}

u8 TryIncrementMonLevel(struct Pokemon *);
extern u16 word_2024E82;

void sub_804151C(struct Pokemon * mon)
{
    s32 i;
    u8 r6;
    u16 temp;

    for(i = 0; i < 100; i++){
        if(TryIncrementMonLevel(mon) == FALSE) goto end;

        r6 = 1;
        while((temp = sub_803B7C8(mon, r6)) != 0){
            r6 = 0;
            if(temp == 0xffff){
                DeleteFirstMoveAndGiveMoveToMon(mon, word_2024E82);
            }
        }
    }

    end:

    CalculateMonStats(mon);
}

u16 sub_8041570(struct DayCareData * daycare_data, u8 slot)
{
    u16 species;
    u32 experience;
    struct Pokemon pokemon;

    GetBoxMonNick(&daycare_data->mons[slot], gStringVar1);
    species = GetBoxMonData(&daycare_data->mons[slot], MON_DATA_SPECIES);
    sub_803B4B4(&daycare_data->mons[slot], &pokemon);
    if (GetMonData(&pokemon, MON_DATA_LEVEL) != MAX_LEVEL)
    {
        experience = GetMonData(&pokemon, MON_DATA_EXP) + daycare_data->mail.extra.steps[slot];
        SetMonData(&pokemon, MON_DATA_EXP, (u8 *)&experience);
        sub_804151C(&pokemon);
    }
    gPlayerParty[PARTY_SIZE - 1] = pokemon;
    if (daycare_data->mail.data[slot].mail.itemId)
    {
        GiveMailToMon2(&gPlayerParty[PARTY_SIZE - 1], &daycare_data->mail.data[slot].mail);
        sub_80417F4(&daycare_data->mail.data[slot]);
    }
    party_compaction();
    ZeroBoxMonData(&daycare_data->mons[slot]);
    daycare_data->mail.extra.steps[slot] = 0;
    sub_80414C0(daycare_data);
    CalculatePlayerPartyCount();
    return species;
}

u16 sub_8041648()
{
    return sub_8041570(&gSaveBlock1.daycareData, gSpecialVar_0x8004);
}

u8 Daycare_GetLevelAfterSteps(struct BoxPokemon * mon, u32 steps){
    struct BoxPokemon temp = *mon;
    u32 new_exp = GetBoxMonData(mon, MON_DATA_EXP) + steps;
    SetBoxMonData(&temp, MON_DATA_EXP, (u8 *) &new_exp);
    return GetLevelFromBoxMonExp(&temp);
}

u8 sub_80416A0(struct DayCareData *daycareData, u8 slot)
{
    u8 levelBefore;
    u8 levelAfter;

    levelBefore = GetLevelFromBoxMonExp(&daycareData->mons[slot]);
    levelAfter = Daycare_GetLevelAfterSteps(&daycareData->mons[slot], daycareData->mail.extra.steps[slot]);
    return levelAfter - levelBefore;
}

u8 sub_80416E8(struct DayCareData *dayCareData, u8 slot)
{
    u8 levelDelta = sub_80416A0(dayCareData, slot);
    GetBoxMonNick(&dayCareData->mons[slot], gStringVar1);
    ConvertIntToDecimalStringN(gStringVar2, levelDelta, STR_CONV_MODE_LEFT_ALIGN, 2);
    return levelDelta;
}

u16 sub_8041728(struct DayCareData *dayCareData, u8 slot)
{
    u16 cost;

    u8 levelDelta = sub_80416A0(dayCareData, slot);
    GetBoxMonNick(&dayCareData->mons[slot], gStringVar1);
    cost = 100 + 100 * levelDelta;
    ConvertIntToDecimalStringN(gStringVar2, cost, STR_CONV_MODE_LEFT_ALIGN, 5);
    return cost;
}

void sub_8041770(void)
{
    gSpecialVar_0x8005 = sub_8041728(&gSaveBlock1.daycareData, gSpecialVar_0x8004);
}

void sub_8041790(u16 i)
{
    gSaveBlock1.daycareData.mail.extra.steps[0] += i;
    gSaveBlock1.daycareData.mail.extra.steps[1] += i;
}

u8 sub_80417B8(void)
{
    if (GetBoxMonData(&gSaveBlock1.daycareData.mons[gSpecialVar_0x8004], MON_DATA_SPECIES) != 0)
        return sub_80416E8(&gSaveBlock1.daycareData, gSpecialVar_0x8004);
    return 0;
}

void sub_80417F4(struct DayCareMail *mail)
{
    u8 zero;
    u8 *names;
    u8 *names2;
    int i;
    zero = 0;
    for (i = 7, names = mail->names + 7; i >= 0; i --)
        *names-- = zero;
    names2 = mail->names + 8;
    zero = 0;
    names = mail->names + 18;
    do *names-- = zero; while ((int)names >= (int)names2);
    ClearMailStruct(&mail->mail);
}

void unref_sub_8041824(struct DayCareData *dayCareData)
{
    u8 slot;
    for (slot = 0; slot < ARRAY_COUNT(dayCareData->mons); slot ++)
    {
        ZeroBoxMonData(&dayCareData->mons[slot]);
        dayCareData->mail.extra.steps[slot] = 0;
        sub_80417F4(&dayCareData->mail.data[slot]);
    }
    dayCareData->unk_118 = 0;
    dayCareData->unk_11a = 0;
}

u16 sub_8041870(u16 species)
{
    int i, j, k;
    bool8 found;
    for (i = 0; i < 5; i ++)
    {
        found = FALSE;
        for (j = 1; j < NUM_SPECIES; j ++)
        {
            for (k = 0; k < 5; k ++)
            {
                if (gEvolutionTable[j].evolutions[k].targetSpecies == species)
                {
                    species = j;
                    found = TRUE;
                    break;
                }
            }
            if (found)
                break;
        }
        if (j == 412)
            break;
    }
    return species;
}

void sub_80418F0(struct DayCareData *dayCareData)
{
    dayCareData->unk_118 = (Random() % 0xfffe) + 1;
    FlagSet(0x86);
}

void sub_804191C(struct DayCareData *dayCareData)
{
    dayCareData->unk_118 = Random() | 0x8000;
    FlagSet(0x86);
}

void sub_8041940(void)
{
    sub_80418F0(&gSaveBlock1.daycareData);
}

void sub_8041950(void)
{
    sub_804191C(&gSaveBlock1.daycareData);
}

static void sub_8041960(u8 *data, u8 idx)
{
    int i, j;
    u8 temp[6];
    data[idx] = 0xff;
    for (i = 0; i < 6; i ++)
        temp[i] = data[i];
    j = 0;
    for (i = 0; i < 6; i ++)
        if (temp[i] != 0xff)
            data[j++] = temp[i];
}

void InheritIVs(struct Pokemon *egg, struct DayCareData *dayCareData)
{
    u8 i;
    u8 selectedIvs[3];
    u8 allIvs[6];
    u8 whichParent[3];
    u8 iv;
    for (i = 0; i < 6; i ++)
        allIvs[i] = i;
    for (i = 0; i < 3; i ++)
    {
        selectedIvs[i] = allIvs[Random() % (6 - i)];
        sub_8041960(allIvs, selectedIvs[i]);
    }
    for (i = 0; i < 3; i ++)
        whichParent[i] = Random() % 2;
    for (i = 0; i < 3; i ++)
    {
        switch (selectedIvs[i])
        {
            case 0:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_HP_IV);
                SetMonData(egg, MON_DATA_HP_IV, &iv);
                break;
            case 1:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_ATK_IV);
                SetMonData(egg, MON_DATA_ATK_IV, &iv);
                break;
            case 2:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_DEF_IV);
                SetMonData(egg, MON_DATA_DEF_IV, &iv);
                break;
            case 3:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_SPD_IV);
                SetMonData(egg, MON_DATA_SPD_IV, &iv);
                break;
            case 4:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_SPATK_IV);
                SetMonData(egg, MON_DATA_SPATK_IV, &iv);
                break;
            case 5:
                iv = GetBoxMonData(&dayCareData->mons[whichParent[i]], MON_DATA_SPDEF_IV);
                SetMonData(egg, MON_DATA_SPDEF_IV, &iv);
                break;
        }
    }
}

#ifdef NONMATCHING
u8 pokemon_get_eggmoves(struct Pokemon *egg, u16 buffer[10])
{
    u16 i, j;
    u16 nEggMoves = 0;
    u16 offset = 0;
    u16 species = GetMonData(egg, MON_DATA_SPECIES);
    for (i = 0; i < ARRAY_COUNT(gEggMoves) - 1; i ++)
        if (gEggMoves[i] == species + EGG_MOVES_SPECIES_OFFSET)
        {
            offset = i + 1;
            break;
        }
    // Register differences incurred here due to cryptic duplication of gEggMoves pointer
    for (j = 0; j < 10 && gEggMoves[offset + j] <= EGG_MOVES_SPECIES_OFFSET; j ++)
    {
        buffer[j] = gEggMoves[offset + j];
        nEggMoves ++;
    }
    return nEggMoves;
}
#else
__attribute__((naked))
u8 pokemon_get_eggmoves(struct Pokemon *egg, u16 buffer[10])
{
    asm_unified("\tpush {r4-r7,lr}\n"
                    "\tmov r7, r8\n"
                    "\tpush {r7}\n"
                    "\tmov r8, r1\n"
                    "\tmovs r6, 0\n"
                    "\tmovs r4, 0\n"
                    "\tmovs r1, 0xB\n"
                    "\tbl GetMonData\n"
                    "\tlsls r0, 16\n"
                    "\tlsrs r3, r0, 16\n"
                    "\tmovs r2, 0\n"
                    "\tldr r5, _08041B44 @ =gEggMoves\n"
                    "\tldrh r1, [r5]\n"
                    "\tldr r7, _08041B48 @ =0x00004e20\n"
                    "\tadds r0, r3, r7\n"
                    "\tcmp r1, r0\n"
                    "\tbne _08041B4C\n"
                    "\tmovs r4, 0x1\n"
                    "\tb _08041B6E\n"
                    "\t.align 2, 0\n"
                    "_08041B44: .4byte gEggMoves\n"
                    "_08041B48: .4byte 0x00004e20\n"
                    "_08041B4C:\n"
                    "\tadds r0, r2, 0x1\n"
                    "\tlsls r0, 16\n"
                    "\tlsrs r2, r0, 16\n"
                    "\tldr r0, _08041BB8 @ =0x00000471\n"
                    "\tldr r5, _08041BBC @ =gEggMoves\n"
                    "\tcmp r2, r0\n"
                    "\tbhi _08041B6E\n"
                    "\tlsls r0, r2, 1\n"
                    "\tadds r0, r5\n"
                    "\tldrh r1, [r0]\n"
                    "\tldr r7, _08041BC0 @ =0x00004e20\n"
                    "\tadds r0, r3, r7\n"
                    "\tcmp r1, r0\n"
                    "\tbne _08041B4C\n"
                    "\tadds r0, r2, 0x1\n"
                    "\tlsls r0, 16\n"
                    "\tlsrs r4, r0, 16\n"
                    "_08041B6E:\n"
                    "\tmovs r2, 0\n"
                    "\tlsls r0, r4, 1\n"
                    "\tadds r0, r5\n"
                    "\tldrh r0, [r0]\n"
                    "\tldr r1, _08041BC0 @ =0x00004e20\n"
                    "\tcmp r0, r1\n"
                    "\tbhi _08041BAA\n"
                    "\tadds r7, r5, 0\n"
                    "\tadds r3, r1, 0\n"
                    "_08041B80:\n"
                    "\tlsls r1, r2, 1\n"
                    "\tadd r1, r8\n"
                    "\tadds r0, r4, r2\n"
                    "\tlsls r0, 1\n"
                    "\tadds r0, r7\n"
                    "\tldrh r0, [r0]\n"
                    "\tstrh r0, [r1]\n"
                    "\tadds r0, r6, 0x1\n"
                    "\tlsls r0, 16\n"
                    "\tlsrs r6, r0, 16\n"
                    "\tadds r0, r2, 0x1\n"
                    "\tlsls r0, 16\n"
                    "\tlsrs r2, r0, 16\n"
                    "\tcmp r2, 0x9\n"
                    "\tbhi _08041BAA\n"
                    "\tadds r0, r4, r2\n"
                    "\tlsls r0, 1\n"
                    "\tadds r0, r5\n"
                    "\tldrh r0, [r0]\n"
                    "\tcmp r0, r3\n"
                    "\tbls _08041B80\n"
                    "_08041BAA:\n"
                    "\tlsls r0, r6, 24\n"
                    "\tlsrs r0, 24\n"
                    "\tpop {r3}\n"
                    "\tmov r8, r3\n"
                    "\tpop {r4-r7}\n"
                    "\tpop {r1}\n"
                    "\tbx r1\n"
                    "\t.align 2, 0\n"
                    "_08041BB8: .4byte 0x00000471\n"
                    "_08041BBC: .4byte gEggMoves\n"
                    "_08041BC0: .4byte 0x00004e20");
}
#endif

extern u16 gUnknown_03000470[50];
extern u16 gUnknown_030004D8[4];
extern u16 gUnknown_030004E0[4];
extern u16 gUnknown_030004E8[10];
extern u16 gUnknown_03000500[4];

void daycare_build_child_moveset(struct Pokemon *egg, struct BoxPokemon *dad, struct BoxPokemon *mom)
{
    u16 numSharedParentMoves;
    u8 numLevelUpMoves;
    u8 numEggMoves;
    u16 i, j;

    numSharedParentMoves = 0;
    for (i = 0; i < 4; i ++)
    {
        gUnknown_03000500[i] = 0;
        gUnknown_030004D8[i] = 0;
        gUnknown_030004E0[i] = 0;
    }
    for (i = 0; i < 10; i ++)
        gUnknown_030004E8[i] = 0;
    for (i = 0; i < 50; i ++)
        gUnknown_03000470[i] = 0;

    numLevelUpMoves = GetLevelUpMovesBySpecies(GetMonData(egg, MON_DATA_SPECIES), gUnknown_03000470);
    for (i = 0; i < 4; i ++)
    {
        gUnknown_030004D8[i] = GetBoxMonData(dad, MON_DATA_MOVE1 + i);
        gUnknown_03000500[i] = GetBoxMonData(mom, MON_DATA_MOVE1 + i);
    }
    numEggMoves = pokemon_get_eggmoves(egg, gUnknown_030004E8);

    for (i = 0; i < 4; i ++)
    {
        if (gUnknown_030004D8[i] != MOVE_NONE)
        {
            for (j = 0; j < numEggMoves; j ++)
            {
                if (gUnknown_030004D8[i] == gUnknown_030004E8[j])
                {
                    if (GiveMoveToMon(egg, gUnknown_030004D8[i]) == 0xffff)
                        DeleteFirstMoveAndGiveMoveToMon(egg, gUnknown_030004D8[i]);
                    break;
                }
            }
        }
        else
            break;
    }
    for (i = 0; i < 4; i ++)
    {
        if (gUnknown_030004D8[i] != MOVE_NONE)
        {
            for (j = 0; j < 50 + 8; j ++)
            {
                if (gUnknown_030004D8[i] == ItemIdToBattleMoveId(ITEM_TM01 + j) && CanMonLearnTMHM(egg, j))
                {
                    if (GiveMoveToMon(egg, gUnknown_030004D8[i]) == 0xffff)
                        DeleteFirstMoveAndGiveMoveToMon(egg, gUnknown_030004D8[i]);
                }
            }
        }
    }
    for (i = 0; i < 4; i ++)
    {
        if (gUnknown_030004D8[i] == MOVE_NONE)
            break;
        for (j = 0; j < 4; j ++)
        {
            if (gUnknown_030004D8[i] == gUnknown_03000500[j] && gUnknown_030004D8[i] != MOVE_NONE)
                gUnknown_030004E0[numSharedParentMoves++] = gUnknown_030004D8[i];
        }
    }
    for (i = 0; i < 4; i ++)
    {
        if (gUnknown_030004E0[i] == MOVE_NONE)
            break;
        for (j = 0; j < numLevelUpMoves; j ++)
        {
            if (gUnknown_03000470[j] != MOVE_NONE && gUnknown_030004E0[i] == gUnknown_03000470[j])
            {
                if (GiveMoveToMon(egg, gUnknown_030004E0[i]) == 0xffff)
                    DeleteFirstMoveAndGiveMoveToMon(egg, gUnknown_030004E0[i]);
                break;
            }
        }
    }
}

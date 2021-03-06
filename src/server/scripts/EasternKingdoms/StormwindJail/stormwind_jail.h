
#ifndef DEF_STORMWIND_JAIL_H
#define DEF_STORMWIND_JAIL_H

#define MAX_ENCOUNTER 3

enum Creatures
{
    // Alliance NPC's
    NPC_RIFLE_COMMANDER_COE     = 46417,
    NPC_NURSE_LILLIAN           = 46410,
    NPC_LILLIANS_LIGHTWELL      = 46411,
    NPC_WARDEN_THELWATER        = 46409,
    NPC_MORTIMER_MOLOCH         = 46482,

    NPC_STOCKADE_RIFLEMAN       = 46406,
    NPC_STOCKADE_GUARD          = 46405,
    NPC_INJURED_STOCKADE_GUARD  = 46407,
    NPC_INJURED_STOCKADE_RIFLEMAN = 46408,

    // Bosses
    BOSS_RANDOLPH_MOLOCH        = 46383,
    BOSS_LORD_OVERHEAT          = 46264,
    BOSS_HOGGER                 = 46254,
};

enum Datas
{
    DATA_RANDOLPH_MOLOCH = 1,
    DATA_LORD_OVERHEAT,
    DATA_HOGGER,
};

#endif

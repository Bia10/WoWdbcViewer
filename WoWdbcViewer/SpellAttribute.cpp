#include "SpellAttribute.h"

QString attributesDescription[7][32][2] = {
    {
        { "UNK0", "" },
        { "RANGED", "All ranged abilites have this flag" },
        { "ON_NEXT_SWING_1", "on next swing" },
        { "UNK3", "not set in 3.0.3" },
        { "UNK4", "isAbility" },
        { "TRADESPELL", "trade spells, will be added by client to a sublist of profession spell" },
        { "PASSIVE", "Passive spell" },
        { "UNK7", "can't be linked in chat?" },
        { "UNK8", "hide created item in tooltip (for effect=24)" },
        { "UNK9", "" },
        { "ON_NEXT_SWING_2", "on next swing 2" },
        { "UNK11", "" },
        { "DAYTIME_ONLY", "only useable at daytime, not set in 2.4.2" },
        { "NIGHT_ONLY", "only useable at night, not set in 2.4.2" },
        { "INDOORS_ONLY", "only useable indoors, not set in 2.4.2" },
        { "OUTDOORS_ONLY", "Only useable outdoors." },
        { "NOT_SHAPESHIFT", "Not while shapeshifted" },
        { "ONLY_STEALTHED", "Must be in stealth" },
        { "UNK18", "" },
        { "LEVEL_DAMAGE_CALCULATION", "spelldamage depends on caster level" },
        { "STOP_ATTACK_TARGET", "Stop attack after use this spell (and not begin attack if use)" },
        { "IMPOSSIBLE_DODGE_PARRY_BLOCK", "Cannot be dodged/parried/blocked" },
        { "SET_TRACKING_TARGET", "SetTrackingTarget" },
        { "UNK23", "castable while dead?" },
        { "CASTABLE_WHILE_MOUNTED", "castable while mounted" },
        { "DISABLED_WHILE_ACTIVE", "Activate and start cooldown after aura fade or remove summoned creature or go" },
        { "UNK26", "" },
        { "CASTABLE_WHILE_SITTING", "castable while sitting" },
        { "CANT_USED_IN_COMBAT", "Cannot be used in combat" },
        { "UNAFFECTED_BY_INVULNERABILITY", "unaffected by invulnerability (hmm possible not...)" },
        { "UNK30", "breakable by damage?" },
        { "CANT_CANCEL", "positive aura can't be canceled" },
    },
    {
        { "EX_UNK0", "" },
        { "EX_DRAIN_ALL_POWER", "use all power (Only paladin Lay of Hands and Bunyanize)" },
        { "EX_CHANNELED_1", "channeled 1" },
        { "EX_UNK3", "" },
        { "EX_UNK4", "" },
        { "EX_NOT_BREAK_STEALTH", "Not break stealth" },
        { "EX_CHANNELED_2", "channeled 2" },
        { "EX_NEGATIVE", "" },
        { "EX_NOT_IN_COMBAT_TARGET", "Spell req target not to be in combat state" },
        { "EX_UNK9", "" },
        { "EX_NO_THREAT", "no generates threat on cast 100%" },
        { "EX_UNK11", "" },
        { "EX_UNK12", "" },
        { "EX_FARSIGHT", "related to farsight" },
        { "EX_UNK14", "" },
        { "EX_DISPEL_AURAS_ON_IMMUNITY", "remove auras on immunity" },
        { "EX_UNAFFECTED_BY_SCHOOL_IMMUNE", "unaffected by school immunity" },
        { "EX_UNK17", "for auras SPELL_AURA_TRACK_CREATURES, SPELL_AURA_TRACK_RESOURCES and SPELL_AURA_TRACK_STEALTHED select non-stacking tracking spells" },
        { "EX_UNK18", "" },
        { "EX_UNK19", "" },
        { "EX_REQ_TARGET_COMBO_POINTS", "Req combo points on target" },
        { "EX_UNK21", "" },
        { "EX_REQ_COMBO_POINTS", "Use combo points (in 4.x not required combo point target selected)" },
        { "EX_UNK23", "" },
        { "EX_UNK24", "Req fishing pole??" },
        { "EX_UNK25", "not set in 2.4.2" },
        { "EX_UNK26", "" },
        { "EX_UNK27", "" },
        { "EX_UNK28", "" },
        { "EX_UNK29", "" },
        { "EX_UNK30", "overpower" },
        { "EX_UNK31", "" },
    },
    {
        { "EX2_UNK0", "" },
        { "EX2_UNK1", "" },
        { "EX2_CANT_REFLECTED", "? used for detect can or not spell reflected // do not need LOS (e.g. 18220 since 3.3.3)" },
        { "EX2_UNK3", "auto targeting? (e.g. fishing skill enhancement items since 3.3.3)" },
        { "EX2_UNK4", "" },
        { "EX2_AUTOREPEAT_FLAG", "" },
        { "EX2_UNK6", "only usable on tabbed by yourself" },
        { "EX2_UNK7", "" },
        { "EX2_UNK8", "not set in 2.4.2" },
        { "EX2_UNK9", "" },
        { "EX2_UNK10", "" },
        { "EX2_HEALTH_FUNNEL", "" },
        { "EX2_UNK12", "" },
        { "EX2_UNK13", "" },
        { "EX2_UNK14", "" },
        { "EX2_UNK15", "not set in 2.4.2" },
        { "EX2_UNK16", "" },
        { "EX2_UNK17", "suspend weapon timer instead of resetting it, (?Hunters Shot and Stings only have this flag?)" },
        { "EX2_UNK18", "Only Revive pet - possible req dead pet" },
        { "EX2_NOT_NEED_SHAPESHIFT", "does not necessary need shapeshift (pre-3.x not have passive spells with this attribute)" },
        { "EX2_UNK20", "" },
        { "EX2_DAMAGE_REDUCED_SHIELD", "for ice blocks, pala immunity buffs, priest absorb shields, but used also for other spells -> not sure!" },
        { "EX2_UNK22", "" },
        { "EX2_UNK23", "Only mage Arcane Concentration have this flag" },
        { "EX2_UNK24", "" },
        { "EX2_UNK25", "" },
        { "EX2_UNK26", "unaffected by school immunity" },
        { "EX2_UNK27", "" },
        { "EX2_UNK28", "no breaks stealth if it fails??" },
        { "EX2_CANT_CRIT", "Spell can't crit" },
        { "EX2_UNK30", "" },
        { "EX2_FOOD_BUFF", "Food or Drink Buff (like Well Fed)" },
    },
    {
        { "EX3_UNK0", "" },
        { "EX3_UNK1", "" },
        { "EX3_UNK2", "" },
        { "EX3_UNK3", "" },
        { "EX3_UNK4", "Druid Rebirth only this spell have this flag" },
        { "EX3_UNK5", "" },
        { "EX3_UNK6", "" },
        { "EX3_UNK7", "create a separate (de)buff stack for each caster" },
        { "EX3_TARGET_ONLY_PLAYER", "Can target only player" },
        { "EX3_UNK9", "" },
        { "EX3_MAIN_HAND", "Main hand weapon required" },
        { "EX3_BATTLEGROUND", "Can casted only on battleground" },
        { "EX3_CAST_ON_DEAD", "target is a dead player (not every spell has this flag)" },
        { "EX3_UNK13", "" },
        { "EX3_UNK14", "\"Honorless Target\" only this spells have this flag" },
        { "EX3_UNK15", "Auto Shoot, Shoot, Throw,  - this is autoshot flag" },
        { "EX3_UNK16", "no triggers effects that trigger on casting a spell??" },
        { "EX3_NO_INITIAL_AGGRO", "Causes no aggro if not missed" },
        { "EX3_CANT_MISS", "Spell should always hit its target" },
        { "EX3_UNK19", "" },
        { "EX3_DEATH_PERSISTENT", "Death persistent spells" },
        { "EX3_UNK21", "" },
        { "EX3_REQ_WAND", "Req wand" },
        { "EX3_UNK23", "" },
        { "EX3_REQ_OFFHAND", "Req offhand weapon" },
        { "EX3_UNK25", "no cause spell pushback ?" },
        { "EX3_UNK26", "" },
        { "EX3_UNK27", "" },
        { "EX3_UNK28", "" },
        { "EX3_UNK29", "" },
        { "EX3_UNK30", "" },
        { "EX3_UNK31", "" },
    },
    {
        { "EX4_UNK0", "" },
        { "EX4_UNK1", "proc on finishing move?" },
        { "EX4_UNK2", "" },
        { "EX4_UNK3", "" },
        { "EX4_UNK4", "This will no longer cause guards to attack on use??" },
        { "EX4_UNK5", "" },
        { "EX4_NOT_STEALABLE", "although such auras might be dispellable, they cannot be stolen" },
        { "EX4_UNK7", "" },
        { "EX4_STACK_DOT_MODIFIER", "no effect on non DoTs?" },
        { "EX4_UNK9", "" },
        { "EX4_SPELL_VS_EXTEND_COST", "Rogue Shiv have this flag" },
        { "EX4_UNK11", "" },
        { "EX4_UNK12", "" },
        { "EX4_UNK13", "" },
        { "EX4_UNK14", "" },
        { "EX4_UNK15", "" },
        { "EX4_NOT_USABLE_IN_ARENA", "not usable in arena" },
        { "EX4_USABLE_IN_ARENA", "usable in arena" },
        { "EX4_UNK18", "" },
        { "EX4_UNK19", "" },
        { "EX4_UNK20", "do not give \"more powerful spell\" error message" },
        { "EX4_UNK21", "" },
        { "EX4_UNK22", "" },
        { "EX4_UNK23", "" },
        { "EX4_UNK24", "" },
        { "EX4_UNK25", "pet scaling auras" },
        { "EX4_CAST_ONLY_IN_OUTLAND", "Can only be used in Outland." },
        { "EX4_UNK27", "" },
        { "EX4_UNK28", "" },
        { "EX4_UNK29", "" },
        { "EX4_UNK30", "" },
        { "EX4_UNK31", "" },
    },
    {
        { "EX5_UNK0", "" },
        { "EX5_NO_REAGENT_WHILE_PREP", "not need reagents if UNIT_FLAG_PREPARATION" },
        { "EX5_UNK2", "removed at enter arena (e.g. 31850 since 3.3.3)" },
        { "EX5_USABLE_WHILE_STUNNED", "usable while stunned" },
        { "EX5_UNK4", "" },
        { "EX5_SINGLE_TARGET_SPELL", "Only one target can be apply at a time" },
        { "EX5_UNK6", "" },
        { "EX5_UNK7", "" },
        { "EX5_UNK8", "" },
        { "EX5_START_PERIODIC_AT_APPLY", " begin periodic tick at aura apply" },
        { "EX5_UNK10", "" },
        { "EX5_UNK11", "" },
        { "EX5_UNK12", "" },
        { "EX5_UNK13", "haste affects duration (e.g. 8050 since 3.3.3)" },
        { "EX5_UNK14", "" },
        { "EX5_UNK15", "" },
        { "EX5_UNK16", "" },
        { "EX5_USABLE_WHILE_FEARED", "usable while feared" },
        { "EX5_USABLE_WHILE_CONFUSED", "usable while confused" },
        { "EX5_UNK19", "" },
        { "EX5_UNK20", "" },
        { "EX5_UNK21", "" },
        { "EX5_UNK22", "" },
        { "EX5_UNK23", "" },
        { "EX5_UNK24", "" },
        { "EX5_UNK25", "" },
        { "EX5_UNK26", "" },
        { "EX5_UNK27", "" },
        { "EX5_UNK28", "" },
        { "EX5_UNK29", "" },
        { "EX5_UNK30", "" },
        { "EX5_UNK31", "Forces all nearby enemies to focus attacks caster" }
    },
    {
        { "EX6_UNK0", "Only Move spell have this flag" },
        { "EX6_ONLY_IN_ARENA", "only usable in arena, not used in 3.2.0a and early" },
        { "EX6_UNK2", "" },
        { "EX6_UNK3", "" },
        { "EX6_UNK4", "" },
        { "EX6_UNK5", "" },
        { "EX6_UNK6", "" },
        { "EX6_UNK7", "" },
        { "EX6_UNK8", "" },
        { "EX6_UNK9", "" },
        { "EX6_UNK10", "" },
        { "EX6_NOT_IN_RAID_INSTANCE", "not usable in raid instance" },
        { "EX6_UNK12", "for auras SPELL_AURA_TRACK_CREATURES, SPELL_AURA_TRACK_RESOURCES and SPELL_AURA_TRACK_STEALTHED select non-stacking tracking spells" },
        { "EX6_UNK13", "" },
        { "EX6_UNK14", "" },
        { "EX6_UNK15", "not set in 3.0.3" },
        { "EX6_UNK16", "" },
        { "EX6_UNK17", "" },
        { "EX6_UNK18", "" },
        { "EX6_UNK19", "" },
        { "EX6_UNK20", "" },
        { "EX6_UNK21", "" },
        { "EX6_UNK22", "" },
        { "EX6_UNK23", "not set in 3.0.3" },
        { "EX6_UNK24", "not set in 3.0.3" },
        { "EX6_UNK25", "not set in 3.0.3" },
        { "EX6_UNK26", "not set in 3.0.3" },
        { "EX6_UNK27", "not set in 3.0.3" },
        { "EX6_UNK28", "not set in 3.0.3" },
        { "EX6_UNK29", "do not apply damage mods (usually in cases where it has already been applied)" },
        { "EX6_UNK30", "not set in 3.0.3" },
        { "EX6_UNK31", "not set in 3.0.3" }
    }
};

SpellAttribute::SpellAttribute(QString &name, QString &description)
{
    _name = name;
    _description = description;
}

const QString         &SpellAttribute::getName() const
{
    return _name;
}

const QString         &SpellAttribute::getDescription() const
{
    return _description;
}

QList<SpellAttribute>    SpellAttribute::create(SpellEntry *spell)
{
    QList<SpellAttribute>   list;
    unsigned int            attributes[] =
    {
        spell->Attributes,
        spell->AttributesEx,
        spell->AttributesEx2,
        spell->AttributesEx3,
        spell->AttributesEx4,
        spell->AttributesEx5,
        spell->AttributesEx6
    };

    for (int e = 0 ; e < 7 ; e++)
    {
        for (unsigned int i = 0, j = 1; i < 32 ; i++, j <<= 1)
        {
            if ((attributes[e] & j) == j)
            {
                list.append(SpellAttribute(attributesDescription[e][i][0], attributesDescription[e][i][1]));
            }
        }
    }
    return list;
}

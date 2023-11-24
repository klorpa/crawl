#pragma once

#include "tag-version.h"

// NOTE: Changing this order will break saves! Appending does not.
enum monster_type                      // env.mons[].type
{
    MONS_PROGRAM_BUG,
        MONS_0 = MONS_PROGRAM_BUG,

#if TAG_MAJOR_VERSION > 34
    MONS_GIANT_LIZARD,          // genus
#endif
    MONS_FRILLED_LIZARD,
#if TAG_MAJOR_VERSION == 34
    MONS_LEOPARD_GECKO,
#endif
    MONS_IGUANA,
    MONS_KOMODO_DRAGON,
    MONS_BASILISK,
    MONS_BAT,
    MONS_FIRE_BAT,
#if TAG_MAJOR_VERSION > 34
    MONS_SNAKE,                // genus
#endif
    MONS_BALL_PYTHON,
    MONS_ADDER,
    MONS_WATER_MOCCASIN,
    MONS_BLACK_MAMBA,
    MONS_ANACONDA,
    MONS_SEA_SNAKE,
#if TAG_MAJOR_VERSION > 34
    MONS_SHOCK_SERPENT,
    MONS_MANA_VIPER,
#endif
    MONS_RAT,
#if TAG_MAJOR_VERSION == 34
    MONS_GREY_RAT,
#endif
    MONS_RIVER_RAT,
    MONS_HELL_RAT,
#if TAG_MAJOR_VERSION == 34
    MONS_LABORATORY_RAT,
#endif
    MONS_QUOKKA,         // Quokka are a type of wallaby, returned -- bwr 382
#if TAG_MAJOR_VERSION == 34
    MONS_PORCUPINE,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_CRYSTAL_ECHIDNA,
    MONS_ARMATAUR,
#endif
    MONS_JACKAL,
    MONS_HOUND,
#if TAG_MAJOR_VERSION == 34
    MONS_WAR_DOG,
#else
    MONS_HOWLER_MONKEY,
#endif
    MONS_WOLF,
    MONS_WARG,
    MONS_HELL_HOUND,
#if TAG_MAJOR_VERSION > 34
    MONS_RAIJU,
    MONS_DOOM_HOUND,
#endif
    MONS_HOG,
    MONS_HELL_HOG,
    MONS_HOLY_SWINE,            // porkalator
#if TAG_MAJOR_VERSION == 34
    MONS_GIANT_SLUG,
    MONS_AGATE_SNAIL,
#else
    MONS_DART_SLUG,
    MONS_TORPOR_SNAIL,
#endif
    MONS_ELEPHANT_SLUG,
    MONS_TYRANT_LEECH,
#if TAG_MAJOR_VERSION == 34
    MONS_BABY_ALLIGATOR,
#endif
    MONS_ALLIGATOR,
#if TAG_MAJOR_VERSION == 34
    MONS_CROCODILE,
#endif
    MONS_HYDRA,
#if TAG_MAJOR_VERSION == 34
    MONS_SHEEP,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_DREAM_SHEEP,
#endif
    MONS_YAK,
    MONS_DEATH_YAK,
    MONS_CATOBLEPAS,
    MONS_ELEPHANT,
    MONS_DIRE_ELEPHANT,
    MONS_HELLEPHANT,
    MONS_MANTICORE,
#if TAG_MAJOR_VERSION == 34
    MONS_HIPPOGRIFF,
    MONS_GRIFFON,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_MUTANT_BEAST,
    MONS_FROG,                  // genus
#endif
    MONS_BULLFROG,
    MONS_CANE_TOAD,
    MONS_BLINK_FROG,
#if TAG_MAJOR_VERSION > 34
    MONS_BARACHI,
    MONS_GOLIATH_FROG,
    MONS_BEAR,                  // genus
#endif
#if TAG_MAJOR_VERSION == 34
    MONS_GRIZZLY_BEAR,
#endif
    MONS_POLAR_BEAR,
    MONS_BLACK_BEAR,
    MONS_WORM,
#if TAG_MAJOR_VERSION == 34
    MONS_BRAIN_WORM,
    MONS_ROCK_WORM,
    MONS_SPINY_WORM,
#endif
    MONS_WYVERN,
#if TAG_MAJOR_VERSION > 34
    MONS_DRAKE,                 // genus
#endif
    MONS_LINDWURM,
    MONS_RIME_DRAKE,
    MONS_SWAMP_DRAKE,
    MONS_DEATH_DRAKE,
#if TAG_MAJOR_VERSION > 34
    MONS_WIND_DRAKE,
    MONS_DRAGON,                // genus
#endif
    MONS_STEAM_DRAGON,
    MONS_ACID_DRAGON,
    MONS_SWAMP_DRAGON,
    MONS_FIRE_DRAGON,
    MONS_ICE_DRAGON,
    MONS_SHADOW_DRAGON,
    MONS_STORM_DRAGON,
    MONS_BONE_DRAGON,
    MONS_QUICKSILVER_DRAGON,
    MONS_IRON_DRAGON,
    MONS_GOLDEN_DRAGON,
    MONS_PEARL_DRAGON,

    MONS_ENDOPLASM,
    MONS_JELLY,
#if TAG_MAJOR_VERSION == 34
    MONS_BROWN_OOZE,
    MONS_GIANT_AMOEBA,
#else
    MONS_ROCKSLIME,
    MONS_QUICKSILVER_OOZE,
#endif
    MONS_AZURE_JELLY,
#if TAG_MAJOR_VERSION == 34
    MONS_DEATH_OOZE,
#endif
    MONS_ACID_BLOB,
    MONS_SLIME_CREATURE,
#if TAG_MAJOR_VERSION == 34
    MONS_PULSATING_LUMP,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_FLOATING_EYE,               // genus
#endif
    MONS_GLASS_EYE,
#if TAG_MAJOR_VERSION == 34
    MONS_EYE_OF_DRAINING,
#endif
    MONS_SHINING_EYE,
    MONS_EYE_OF_DEVASTATION,
    MONS_GREAT_ORB_OF_EYES,
    MONS_GLOWING_ORANGE_BRAIN,

    MONS_DANCING_WEAPON,
#if TAG_MAJOR_VERSION > 34
    MONS_SPECTRAL_WEAPON,
    MONS_ANIMATED_ARMOUR,
    MONS_LIVING_SPELL,
    MONS_WALKING_TOME,
    MONS_EARTHEN_TOME,
    MONS_CRYSTAL_TOME,
    MONS_DIVINE_TOME,
    MONS_FROSTBOUND_TOME,
    MONS_STRANGE_MACHINE,
    MONS_PHARAOH_ANT,
    MONS_STEELBARB_WORM,
    MONS_JOROGUMO,
    MONS_BROODMOTHER,
    MONS_CULICIVORA,
    MONS_SUN_MOTH,
    MONS_RADROACH,
#endif
    MONS_HARPY,
#if TAG_MAJOR_VERSION == 34
    MONS_RAVEN,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_BENNU,
    MONS_CAUSTIC_SHRIKE,
    MONS_SHARD_SHRIKE,

#endif
    MONS_FIRE_CRAB,
#if TAG_MAJOR_VERSION == 34
    MONS_HOMUNCULUS,
    MONS_SOUPLING,
#else
    MONS_GHOST_CRAB,
    MONS_CRAB,
#endif

    MONS_BUTTERFLY,
#if TAG_MAJOR_VERSION == 34
    MONS_ANT_LARVA,
    MONS_WORKER_ANT,
    MONS_SOLDIER_ANT,
    MONS_QUEEN_ANT,
#endif
#if TAG_MAJOR_VERSION > 34
    MONS_FORMICID,
#endif
    MONS_KILLER_BEE,
    MONS_QUEEN_BEE,
#if TAG_MAJOR_VERSION > 34
    MONS_MELIAI,
#endif
    MONS_VAMPIRE_MOSQUITO,
#if TAG_MAJOR_VERSION == 34
    MONS_BUMBLEBEE,
    MONS_WASP,
#endif
    MONS_HORNET,
#if TAG_MAJOR_VERSION > 34
    MONS_SPARK_WASP,
#endif
#if TAG_MAJOR_VERSION == 34
    MONS_BEETLE,
    MONS_BORING_BEETLE,
#endif
    MONS_BOULDER_BEETLE,
#if TAG_MAJOR_VERSION > 34
    MONS_DEATH_SCARAB,
#endif
    MONS_GIANT_COCKROACH,
#if TAG_MAJOR_VERSION == 34
    MONS_GIANT_CENTIPEDE,
    MONS_GIANT_MITE,
#endif
    MONS_SPIDER,
    MONS_WOLF_SPIDER,
#if TAG_MAJOR_VERSION == 34
    MONS_TRAPDOOR_SPIDER,
#endif
    MONS_JUMPING_SPIDER,
    MONS_ORB_SPIDER,
    MONS_TARANTELLA,
    MONS_REDBACK,
    MONS_SCORPION,
    MONS_EMPEROR_SCORPION,
    MONS_MOTH,                  // genus
#if TAG_MAJOR_VERSION == 34
    MONS_MOTH_OF_SUPPRESSION,
#endif
    MONS_GHOST_MOTH,
    MONS_MOTH_OF_WRATH,
    MONS_DEMONIC_CRAWLER,
    MONS_SNAPPING_TURTLE,
    MONS_ALLIGATOR_SNAPPING_TURTLE,
#if TAG_MAJOR_VERSION == 34
    MONS_GNOME,
#endif
    MONS_HALFLING,              // recolouring + single vault.
    MONS_FELID,                 // recolouring + single vault. Miaow!
    MONS_VAMPIRE_BAT,           // recolouring + vaults
    MONS_DEMIGOD,               // recolouring + single vault
    MONS_DEMONSPAWN,
#if TAG_MAJOR_VERSION > 34
    MONS_DEMONSPAWN_BLOOD_SAINT,
    MONS_DEMONSPAWN_WARMONGER,
    MONS_DEMONSPAWN_CORRUPTER,
    MONS_DEMONSPAWN_BLACK_SUN,
#endif
    MONS_GARGOYLE,
    MONS_WAR_GARGOYLE,
    MONS_MOLTEN_GARGOYLE,
    MONS_UGLY_THING,
    MONS_VERY_UGLY_THING,
    MONS_ICE_BEAST,
    MONS_SKY_BEAST,
    MONS_SPHINX,
    MONS_ORB_GUARDIAN,

    MONS_GOLEM,                 // genus
#if TAG_MAJOR_VERSION == 34
    MONS_CLAY_GOLEM,
    MONS_WOOD_GOLEM,
    MONS_STONE_GOLEM,
#else
    MONS_SALTLING,
    MONS_PEACEKEEPER,
#endif
    MONS_IRON_GOLEM,
    MONS_CRYSTAL_GUARDIAN,
    MONS_TOENAIL_GOLEM,
    MONS_ELECTRIC_GOLEM, // replacing the guardian robot -- bwr
#if TAG_MAJOR_VERSION > 34
    MONS_GUARDIAN_GOLEM,
    MONS_SPELLFORGED_SERVITOR,
    MONS_USHABTI,
    MONS_NARGUN,
#endif
    MONS_ORB_OF_FIRE,    // Swords renamed to fit -- bwr
#if TAG_MAJOR_VERSION > 34
    MONS_ELEMENTAL,             // genus
#endif
    MONS_EARTH_ELEMENTAL,
    MONS_FIRE_ELEMENTAL,
    MONS_AIR_ELEMENTAL,
#if TAG_MAJOR_VERSION > 34
    MONS_IRON_ELEMENTAL,
    MONS_QUICKSILVER_ELEMENTAL,
    MONS_ELEMENTAL_WELLSPRING,
#endif
    MONS_TWISTER,        // air miscasts
    MONS_GOLDEN_EYE,
    MONS_FIRE_VORTEX,
    MONS_SPATIAL_VORTEX,
    MONS_INSUBSTANTIAL_WISP,
#if TAG_MAJOR_VERSION > 34
    MONS_WILL_O_THE_WISP,
#else
    MONS_VAPOUR,

    // Mimics:
    MONS_INEPT_ITEM_MIMIC,
    MONS_ITEM_MIMIC,
    MONS_RAVENOUS_ITEM_MIMIC,
    MONS_MONSTROUS_ITEM_MIMIC,
    MONS_INEPT_FEATURE_MIMIC,
    MONS_FEATURE_MIMIC,
    MONS_RAVENOUS_FEATURE_MIMIC,
    MONS_MONSTROUS_FEATURE_MIMIC, // unused
#endif

    // Plants:
    MONS_TOADSTOOL,
    MONS_FUNGUS,
    MONS_WANDERING_MUSHROOM,
#if TAG_MAJOR_VERSION > 34
    MONS_SLEEPCAP,
    MONS_DEATHCAP,
#endif
    MONS_PLANT,
    MONS_OKLOB_SAPLING,
    MONS_OKLOB_PLANT,
    MONS_BUSH,
    MONS_BURNING_BUSH,
#if TAG_MAJOR_VERSION > 34
    MONS_THORN_HUNTER,
    MONS_BRIAR_PATCH,
    MONS_SHAMBLING_MANGROVE,
    MONS_VINE_STALKER,
    MONS_ANIMATED_TREE,
    MONS_DEMONIC_PLANT,
    MONS_WITHERED_PLANT,
    MONS_STARFLOWER,
#endif
    MONS_BALLISTOMYCETE_SPORE,
    MONS_BALLISTOMYCETE,
#if TAG_MAJOR_VERSION == 34
    MONS_HYPERACTIVE_BALLISTOMYCETE,
#endif

    MONS_GOBLIN,
    MONS_HOBGOBLIN,
    MONS_GNOLL,
    MONS_GNOLL_BOUDA,
    MONS_GNOLL_SERGEANT,
    MONS_BOGGART,
    MONS_KOBOLD,
    MONS_KOBOLD_BRIGAND,
    MONS_KOBOLD_DEMONOLOGIST,
#if TAG_MAJOR_VERSION > 34
    MONS_KOBOLD_BLASTMINER,
#endif
    MONS_ORC,
    MONS_ORC_WARRIOR,
    MONS_ORC_PRIEST,
    MONS_ORC_HIGH_PRIEST,
    MONS_ORC_WIZARD,
    MONS_ORC_KNIGHT,
    MONS_ORC_SORCERER,
    MONS_ORC_WARLORD,
    MONS_DWARF,
    MONS_DEEP_DWARF,
#if TAG_MAJOR_VERSION == 34
    MONS_DEEP_DWARF_SCION,
    MONS_DEEP_DWARF_ARTIFICER,
    MONS_DEEP_DWARF_NECROMANCER,
    MONS_DEEP_DWARF_BERSERKER,
    MONS_DEATH_KNIGHT,
    MONS_UNBORN,
#endif
    MONS_ELF,
#if TAG_MAJOR_VERSION == 34
    MONS_DEEP_ELF_SOLDIER,
    MONS_DEEP_ELF_FIGHTER,
#endif
    MONS_DEEP_ELF_KNIGHT,
#if TAG_MAJOR_VERSION > 34
    MONS_DEEP_ELF_ARCHER,
    MONS_DEEP_ELF_AIR_MAGE,
#endif
    MONS_DEEP_ELF_FIRE_MAGE,
#if TAG_MAJOR_VERSION == 34
    MONS_DEEP_ELF_SUMMONER,
    MONS_DEEP_ELF_CONJURER,
    MONS_DEEP_ELF_PRIEST,
#endif
    MONS_DEEP_ELF_HIGH_PRIEST,
    MONS_DEEP_ELF_DEMONOLOGIST,
    MONS_DEEP_ELF_ANNIHILATOR,
    MONS_DEEP_ELF_SORCERER,
    MONS_DEEP_ELF_DEATH_MAGE,
#if TAG_MAJOR_VERSION > 34
    MONS_DEEP_ELF_ELEMENTALIST,
#endif
    MONS_DEEP_ELF_BLADEMASTER,
    MONS_DEEP_ELF_MASTER_ARCHER,
    MONS_SPRIGGAN,
    MONS_SPRIGGAN_DRUID,
#if TAG_MAJOR_VERSION == 34
    MONS_SPRIGGAN_ASSASSIN,
#endif
    MONS_SPRIGGAN_RIDER,
    MONS_SPRIGGAN_BERSERKER,
    MONS_SPRIGGAN_DEFENDER,
    MONS_SPRIGGAN_AIR_MAGE,
#if TAG_MAJOR_VERSION == 34
    MONS_FIREFLY,
#endif
    MONS_TENGU,
#if TAG_MAJOR_VERSION > 34
    MONS_TENGU_WARRIOR,
    MONS_TENGU_CONJURER,
    MONS_TENGU_REAVER,
    MONS_FENSTRIDER_WITCH,
#endif
    MONS_MINOTAUR,
    MONS_NAGA,
    MONS_NAGA_WARRIOR,
    MONS_NAGA_MAGE,
#if TAG_MAJOR_VERSION > 34
    MONS_NAGA_RITUALIST,
    MONS_NAGA_SHARPSHOOTER,
#endif
    MONS_NAGARAJA,
    MONS_GUARDIAN_SERPENT,
    MONS_OCTOPODE,
    MONS_MERFOLK,
    MONS_MERFOLK_SIREN,
    MONS_MERFOLK_AVATAR,
#if TAG_MAJOR_VERSION > 34
    MONS_DROWNED_SOUL,
    MONS_SICKLY_MERFOLK_SIREN,
    MONS_MALARIOUS_MERFOLK_AVATAR,
#endif
    MONS_MERFOLK_IMPALER,
    MONS_MERFOLK_AQUAMANCER,
    MONS_MERFOLK_JAVELINEER,
#if TAG_MAJOR_VERSION > 34
    MONS_WATER_NYMPH,
#endif
    MONS_CENTAUR,
    MONS_CENTAUR_WARRIOR,
    MONS_YAKTAUR,
    MONS_YAKTAUR_CAPTAIN,
#if TAG_MAJOR_VERSION > 34
    MONS_FAUN,
    MONS_SATYR,
#endif
    MONS_OGRE,
    MONS_TWO_HEADED_OGRE,
    MONS_OGRE_MAGE,
    MONS_TROLL,
#if TAG_MAJOR_VERSION == 34
    MONS_ROCK_TROLL,
#endif
    MONS_IRON_TROLL,
    MONS_DEEP_TROLL,
#if TAG_MAJOR_VERSION > 34
    MONS_DEEP_TROLL_EARTH_MAGE,
    MONS_DEEP_TROLL_SHAMAN,
#endif
    MONS_GIANT,                 // genus
#if TAG_MAJOR_VERSION == 34
    MONS_HILL_GIANT,
#endif
    MONS_CYCLOPS,
    MONS_ETTIN,
    MONS_STONE_GIANT,
    MONS_FIRE_GIANT,
    MONS_FROST_GIANT,
    MONS_TITAN,
#if TAG_MAJOR_VERSION > 34
    MONS_JUGGERNAUT,
    MONS_IRON_GIANT,
    MONS_CACTUS_GIANT,
    MONS_TAINTED_LEVIATHAN,
#endif
    MONS_HUMAN,
#if TAG_MAJOR_VERSION == 34
    MONS_SLAVE,
#endif
    MONS_HELL_KNIGHT,
#if TAG_MAJOR_VERSION > 34
    MONS_DEATH_KNIGHT,
#endif
    MONS_NECROMANCER,
    MONS_OCCULTIST,
#if TAG_MAJOR_VERSION > 34
    MONS_ARCANIST,
#endif
    MONS_VAULT_GUARD,
#if TAG_MAJOR_VERSION > 34
    MONS_VAULT_SENTINEL,
    MONS_VAULT_WARDEN,
    MONS_IRONBOUND_CONVOKER,
    MONS_IRONBOUND_PRESERVER,
    MONS_IRONBOUND_FROSTHEART,
    MONS_IRONBOUND_THUNDERHULK,
    MONS_IMPERIAL_MYRMIDON,
    MONS_SERVANT_OF_WHISPERS,
    MONS_RAGGED_HIEROPHANT,
    MONS_HALAZID_WARLOCK,
    MONS_SPECTATOR,
    MONS_METEORAN,
#endif
    MONS_KILLER_KLOWN,
    MONS_SHAPESHIFTER,
    MONS_GLOWING_SHAPESHIFTER,

    // Draconians:
    MONS_DRACONIAN,
    MONS_FIRST_DRACONIAN = MONS_DRACONIAN,

    // If adding more drac colours, sync up colour names in
    // mon-util.cc.
    MONS_BLACK_DRACONIAN,
    MONS_FIRST_BASE_DRACONIAN = MONS_BLACK_DRACONIAN,
#if TAG_MAJOR_VERSION == 34
    MONS_MOTTLED_DRACONIAN,
#endif
    MONS_YELLOW_DRACONIAN,
    MONS_GREEN_DRACONIAN,
    MONS_PURPLE_DRACONIAN,
    MONS_RED_DRACONIAN,
    MONS_WHITE_DRACONIAN,
    MONS_LAST_SPAWNED_DRACONIAN = MONS_WHITE_DRACONIAN,
    MONS_GREY_DRACONIAN,
    MONS_PALE_DRACONIAN,
    MONS_LAST_BASE_DRACONIAN = MONS_PALE_DRACONIAN,

    // Sync up with mon-place.cc's draconian selection if adding more.
    MONS_DRACONIAN_STORMCALLER,
    MONS_FIRST_NONBASE_DRACONIAN = MONS_DRACONIAN_STORMCALLER,
    MONS_DRACONIAN_MONK,
#if TAG_MAJOR_VERSION == 34
    MONS_DRACONIAN_ZEALOT,
#endif
    MONS_DRACONIAN_SHIFTER,
    MONS_DRACONIAN_ANNIHILATOR,
    MONS_DRACONIAN_KNIGHT,
    MONS_DRACONIAN_SCORCHER,

    MONS_LAST_NONBASE_DRACONIAN = MONS_DRACONIAN_SCORCHER,
    MONS_LAST_DRACONIAN = MONS_LAST_NONBASE_DRACONIAN,

    // Lava monsters:
#if TAG_MAJOR_VERSION == 34
    MONS_LAVA_WORM,
    MONS_LAVA_FISH,
#endif
    MONS_LAVA_SNAKE,
    MONS_SALAMANDER,
#if TAG_MAJOR_VERSION > 34
    MONS_SALAMANDER_MYSTIC,
    MONS_SALAMANDER_TYRANT,
#endif

    // Water monsters:
#if TAG_MAJOR_VERSION == 34
    MONS_BIG_FISH,
    MONS_GIANT_GOLDFISH,
#endif
    MONS_ELECTRIC_EEL,
#if TAG_MAJOR_VERSION == 34
    MONS_JELLYFISH,
#else
    MONS_FORMLESS_JELLYFISH,
#endif
    MONS_WATER_ELEMENTAL,
    MONS_SWAMP_WORM,
#if TAG_MAJOR_VERSION == 34
    MONS_SHARK,
#else
    MONS_SKYSHARK,
#endif
    MONS_KRAKEN,
    MONS_KRAKEN_TENTACLE,
    MONS_KRAKEN_TENTACLE_SEGMENT,

    // Statuary
    MONS_ORANGE_STATUE,
    MONS_OBSIDIAN_STATUE,
    MONS_ICE_STATUE,
    MONS_STATUE,
    MONS_TRAINING_DUMMY,
    MONS_LIGHTNING_SPIRE,
#if TAG_MAJOR_VERSION > 34
    MONS_DIAMOND_OBELISK,
#endif

    // Demons:
    MONS_CRIMSON_IMP,
    MONS_QUASIT,
    MONS_WHITE_IMP,
    MONS_LEMURE,
    MONS_UFETUBUS,
    MONS_IRON_IMP,
    MONS_SHADOW_IMP,
#if TAG_MAJOR_VERSION > 34
    MONS_CERULEAN_IMP,
#endif
    MONS_RED_DEVIL,
#if TAG_MAJOR_VERSION == 34
    MONS_ROTTING_DEVIL,
#endif
    MONS_HELLWING,
    MONS_SIXFIRHY,
    MONS_NEQOXEC,
    MONS_ORANGE_DEMON,
    MONS_SMOKE_DEMON,
    MONS_YNOXINUL,
    MONS_CHAOS_SPAWN,
    MONS_HELLION,
    MONS_LOROCYPROCA,
    MONS_TORMENTOR,
    MONS_REAPER,
    MONS_SOUL_EATER,
    MONS_ICE_DEVIL,
#if TAG_MAJOR_VERSION == 34
    MONS_BLUE_DEVIL,
#endif
    MONS_HELL_BEAST,
    MONS_RUST_DEVIL,
    MONS_EXECUTIONER,
    MONS_GREEN_DEATH,
    MONS_BLIZZARD_DEMON,
    MONS_BALRUG,
    MONS_CACODEMON,
    MONS_SUN_DEMON,
    MONS_SHADOW_DEMON,
    MONS_HELL_SENTINEL,
    MONS_BRIMSTONE_FIEND,
    MONS_ICE_FIEND,
    MONS_TZITZIMITL,
    MONS_PANDEMONIUM_LORD,

    // Spiritual beings ('R')
#if TAG_MAJOR_VERSION > 34
    MONS_DJINNI,
#endif
    MONS_EFREET,
    MONS_RAKSHASA,
#if TAG_MAJOR_VERSION == 34
    MONS_RAKSHASA_FAKE,
#else
    MONS_DRYAD,
    MONS_ELEIONOMA,
    MONS_WENDIGO,
    MONS_SNAPLASHER_VINE,
    MONS_SNAPLASHER_VINE_SEGMENT,
#endif

    // Abyssals
    MONS_UNSEEN_HORROR,
    MONS_TENTACLED_STARSPAWN,
    MONS_LURKING_HORROR,
    MONS_THRASHING_HORROR,
    MONS_STARCURSED_MASS,
    MONS_ANCIENT_ZYME,
    MONS_WRETCHED_STAR,
#if TAG_MAJOR_VERSION > 34
    MONS_APOCALYPSE_CRAB,
    MONS_STARSPAWN_TENTACLE,
    MONS_STARSPAWN_TENTACLE_SEGMENT,
    MONS_SPATIAL_MAELSTROM,
    MONS_WORLDBINDER,
    MONS_ENTROPY_WEAVER, // not sure where else to put it
    MONS_BUNYIP,
    MONS_CREEPING_INFERNO,
#endif
    MONS_ELDRITCH_TENTACLE,
    MONS_ELDRITCH_TENTACLE_SEGMENT,
    MONS_TENTACLED_MONSTROSITY,
    MONS_ABOMINATION_SMALL,
    MONS_ABOMINATION_LARGE,
#if TAG_MAJOR_VERSION == 34
    MONS_CRAWLING_CORPSE,
    MONS_MACABRE_MASS,
#endif

    // Undead:
#if TAG_MAJOR_VERSION > 34
    MONS_ZOMBIE,
    MONS_SKELETON,
    MONS_SIMULACRUM,
#endif
#if TAG_MAJOR_VERSION == 34
    MONS_PLAGUE_SHAMBLER,
#endif
    MONS_NECROPHAGE,
    MONS_GHOUL,
#if TAG_MAJOR_VERSION == 34
    MONS_FLAMING_CORPSE,
#else
    MONS_BLOATED_HUSK,
#endif
    MONS_MUMMY,
    MONS_BOG_BODY,
    MONS_GUARDIAN_MUMMY,
    MONS_ROYAL_MUMMY,
    MONS_MUMMY_PRIEST,
    MONS_VAMPIRE,
    MONS_VAMPIRE_KNIGHT,
    MONS_VAMPIRE_MAGE,
    MONS_GHOST,                 // common genus for monster and player ghosts
    MONS_PHANTOM,
    MONS_SHADOW,
#if TAG_MAJOR_VERSION == 34
    MONS_HUNGRY_GHOST,
#endif
    MONS_FLAYED_GHOST,
    MONS_WIGHT,
    MONS_WRAITH,
    MONS_FREEZING_WRAITH,
    MONS_SHADOW_WRAITH,
    MONS_SILENT_SPECTRE,
    MONS_EIDOLON,
    MONS_FLYING_SKULL,
    MONS_SKELETAL_WARRIOR,
    MONS_PHANTASMAL_WARRIOR,
    MONS_LICH,
    MONS_ANCIENT_LICH,
#if TAG_MAJOR_VERSION > 34
    MONS_DREAD_LICH,
#endif
    MONS_DEATH_COB,
    MONS_CURSE_TOE,
    MONS_CURSE_SKULL,
    MONS_PROFANE_SERVITOR,
#if TAG_MAJOR_VERSION > 34
    MONS_ANCIENT_CHAMPION,
    MONS_ANTIQUE_CHAMPION,
    MONS_REVENANT,
    MONS_LOST_SOUL,
    MONS_JIANGSHI,
    MONS_SEARING_WRETCH,
    MONS_STOKER,
    MONS_PUTRID_MOUTH,
#endif
    MONS_SKELETON_SMALL,   // recolouring only
    MONS_SKELETON_LARGE,   // recolouring only
    MONS_ZOMBIE_SMALL,     // recolouring only
    MONS_ZOMBIE_LARGE,     // recolouring only
    MONS_SPECTRAL_THING,
    MONS_SIMULACRUM_SMALL, // recolouring only
    MONS_SIMULACRUM_LARGE, // recolouring only
#if TAG_MAJOR_VERSION > 34
    MONS_BOUND_SOUL,
#endif


    // Holies:
    MONS_ANGEL,
    MONS_DAEVA,
    MONS_CHERUB,
    MONS_SERAPH,
#if TAG_MAJOR_VERSION == 34
    MONS_PHOENIX,
    MONS_SILVER_STAR,
    MONS_BLESSED_TOE,
    MONS_SHEDU,
#endif
    MONS_OPHAN,
#if TAG_MAJOR_VERSION == 34
    MONS_SPIRIT,
    MONS_PALADIN,
#endif
    MONS_APIS,

    // Fixed uniques:
    MONS_GERYON,
    MONS_DISPATER,
    MONS_ASMODEUS,
    MONS_ANTAEUS,
    MONS_ERESHKIGAL,
    MONS_ROYAL_JELLY,
    MONS_THE_ENCHANTRESS,
    // the four Pan lords, order must match runes
    MONS_MNOLEG,
    MONS_LOM_LOBON,
    MONS_CEREBOV,
    MONS_GLOORX_VLOQ,
    MONS_SERPENT_OF_HELL,
#if TAG_MAJOR_VERSION > 34
    MONS_SERPENT_OF_HELL_COCYTUS,
    MONS_SERPENT_OF_HELL_DIS,
    MONS_SERPENT_OF_HELL_TARTARUS,
#endif
    // Random uniques:
    MONS_IJYB,
    MONS_JESSICA,
    MONS_SIGMUND,
    MONS_TERENCE,
    MONS_BLORK_THE_ORC,
    MONS_EDMUND,
    MONS_PSYCHE,
    MONS_EROLCHA,
    MONS_DONALD,
    MONS_URUG,
    MONS_JOSEPH,
    MONS_SNORG, // was Anita - 16jan2000 {dlb}
    MONS_ERICA,
    MONS_JOSEPHINE,
    MONS_HAROLD,
    MONS_AGNES,
#if TAG_MAJOR_VERSION == 34
    MONS_MAUD,
#endif
    MONS_LOUISE,
    MONS_FRANCES,
    MONS_RUPERT,
#if TAG_MAJOR_VERSION == 34
    MONS_WIGLAF,
#endif
    MONS_XTAHUA,
    MONS_NORRIS,
    MONS_FREDERICK,
    MONS_MARGERY,
    MONS_BORIS,
    MONS_POLYPHEMUS,
    MONS_MURRAY,
    MONS_TIAMAT,
    MONS_ROXANNE,
    MONS_SONJA,
    MONS_EUSTACHIO,
    MONS_AZRAEL,
    MONS_ILSUIW,
    MONS_PRINCE_RIBBIT,
    MONS_NERGALLE,
    MONS_SAINT_ROKA,
    MONS_NESSOS,
    MONS_LERNAEAN_HYDRA,
    MONS_DISSOLUTION,
    MONS_KIRKE,
    MONS_GRUM,
    MONS_PARGI,
    MONS_MENKAURE,
    MONS_DUVESSA,
    MONS_DOWAN,
    MONS_GASTRONOK,
    MONS_MAURICE,
    MONS_KHUFU,
    MONS_NIKOLA,
    MONS_AIZUL,
    MONS_PIKEL,
    MONS_CRAZY_YIUF,
    MONS_MENNAS,
    MONS_MARA,
#if TAG_MAJOR_VERSION == 34
    MONS_MARA_FAKE,
#endif
    MONS_GRINDER,
    MONS_JORY,
    MONS_IGNACIO,
    MONS_ARACHNE,
#if TAG_MAJOR_VERSION > 34
    MONS_HELLBINDER,
    MONS_CLOUD_MAGE,
    MONS_FANNAR,
    MONS_JORGRUN,
    MONS_SOJOBO,
    MONS_ASTERION,
    MONS_NATASHA,
    MONS_VASHNIA,
    MONS_ROBIN,
    MONS_MOON_TROLL,
    MONS_BAI_SUZHEN,
    MONS_BAI_SUZHEN_DRAGON,
    MONS_MAGGIE,
    MONS_MLIOGLOTL,
    MONS_HEADMASTER,
    MONS_PARGHIT,
    MONS_JOSEPHINA,
    MONS_AMAEMON,
    MONS_LODUL,
    MONS_VV,
    MONS_ZENATA,
    MONS_GRUNN,
    MONS_JEREMIAH,
#endif
    // Sprint uniques:
    MONS_CHUCK,
#if TAG_MAJOR_VERSION == 34
    MONS_IRON_GIANT,
#endif
    MONS_NELLIE,
#if TAG_MAJOR_VERSION == 34
    MONS_IRON_ELEMENTAL,
#endif

    // Specials:
    MONS_PLAYER_ILLUSION,
    MONS_PLAYER_GHOST,
    MONS_BALL_LIGHTNING,
    MONS_ORB_OF_DESTRUCTION,    // a projectile, not a real mon
#if TAG_MAJOR_VERSION > 34
    MONS_FULMINANT_PRISM,
    MONS_BATTLESPHERE,
    MONS_FOXFIRE,
    MONS_BOULDER,
#endif
    MONS_PILLAR_OF_SALT,
#if TAG_MAJOR_VERSION > 34
    MONS_BLOCK_OF_ICE,
#endif
    MONS_HELL_LORD,             // genus
    MONS_MERGED_SLIME_CREATURE, // used only for recolouring
    MONS_SENSED,                // dummy monster for unspecified sensed mons
    MONS_SENSED_TRIVIAL,
    MONS_SENSED_EASY,
    MONS_SENSED_TOUGH,
    MONS_SENSED_NASTY,
    MONS_SENSED_FRIENDLY,
    MONS_PLAYER,                // a certain ugly creature
#if TAG_MAJOR_VERSION > 34
    MONS_PLAYER_SHADOW,         // Dithmenos / god wrath
    MONS_ANCESTOR,              // Hepliaklqana
    MONS_ANCESTOR_KNIGHT,
    MONS_ANCESTOR_BATTLEMAGE,
    MONS_ANCESTOR_HEXER,
#endif
    MONS_TEST_SPAWNER,
#if TAG_MAJOR_VERSION > 34
    MONS_TEST_STATUE,
    MONS_TEST_BLOB,
    MONS_NAMELESS,              // summoning miscast
#endif

    // Add new monsters here:
#if TAG_MAJOR_VERSION == 34
    MONS_SERPENT_OF_HELL_COCYTUS,
    MONS_SERPENT_OF_HELL_DIS,
    MONS_SERPENT_OF_HELL_TARTARUS,

    MONS_HELLBINDER,
    MONS_CLOUD_MAGE,
    MONS_ANIMATED_TREE,

    MONS_BEAR,                  // genus
    MONS_ELEMENTAL,             // genus

    MONS_FANNAR,
    MONS_APOCALYPSE_CRAB,
    MONS_STARSPAWN_TENTACLE,
    MONS_STARSPAWN_TENTACLE_SEGMENT,

    MONS_SPATIAL_MAELSTROM,
    MONS_CHAOS_BUTTERFLY,

    MONS_JORGRUN,
    MONS_LAMIA,

    MONS_FULMINANT_PRISM,
    MONS_BATTLESPHERE,

    MONS_GIANT_LIZARD,          // genus
    MONS_DRAKE,                 // genus
    MONS_PLAYER_SHADOW,         // Dithmenos / god wrath

    MONS_DEEP_TROLL_EARTH_MAGE,
    MONS_DEEP_TROLL_SHAMAN,
    MONS_DIAMOND_OBELISK,

    MONS_VAULT_SENTINEL,
    MONS_VAULT_WARDEN,
    MONS_IRONBOUND_CONVOKER,
    MONS_IRONBOUND_PRESERVER,

    MONS_ZOMBIE,
    MONS_SKELETON,
    MONS_SIMULACRUM,

    MONS_ANCIENT_CHAMPION,
    MONS_REVENANT,
    MONS_LOST_SOUL,
    MONS_JIANGSHI,

    MONS_DJINNI,
    MONS_LAVA_ORC,

    MONS_DRYAD,
    MONS_WIND_DRAKE,
    MONS_FAUN,
    MONS_SATYR,

    MONS_PAN,

    MONS_TENGU_WARRIOR,
    MONS_TENGU_CONJURER,
    MONS_TENGU_REAVER,

    MONS_SPRIGGAN_ENCHANTER,

    MONS_SOJOBO,

    MONS_CHIMERA,

    MONS_SNAPLASHER_VINE,
    MONS_SNAPLASHER_VINE_SEGMENT,
    MONS_THORN_HUNTER,
    MONS_BRIAR_PATCH,
    MONS_SPIRIT_WOLF,
    MONS_ANCIENT_BEAR,
    MONS_WATER_NYMPH,
    MONS_SHAMBLING_MANGROVE,
    MONS_THORN_LOTUS,
    MONS_SPECTRAL_WEAPON,
    MONS_ELEMENTAL_WELLSPRING,
    MONS_POLYMOTH,

    MONS_DEATHCAP,
    MONS_IGNIS,

    MONS_FORMICID,
    MONS_FORMICID_DRONE,
    MONS_FORMICID_VENOM_MAGE,

    MONS_RAIJU,

    MONS_DRAGON,                // genus
    MONS_SNAKE,                 // genus

    MONS_MONSTROUS_DEMONSPAWN,  // removed
    MONS_GELID_DEMONSPAWN,      // removed
    MONS_INFERNAL_DEMONSPAWN,   // removed
    MONS_PUTRID_DEMONSPAWN,     // removed
    MONS_TORTUROUS_DEMONSPAWN,  // removed
    MONS_DEMONSPAWN_BLOOD_SAINT,
    MONS_CHAOS_CHAMPION,        // removed
    MONS_DEMONSPAWN_WARMONGER,
    MONS_DEMONSPAWN_CORRUPTER,
    MONS_DEMONSPAWN_BLACK_SUN,

    MONS_WORLDBINDER,
    MONS_GRAND_AVATAR,
    MONS_VINE_STALKER,

    MONS_DROWNED_SOUL,

    MONS_SHOCK_SERPENT,
    MONS_MANA_VIPER,
    MONS_NAGA_RITUALIST,
    MONS_NAGA_SHARPSHOOTER,

    MONS_SALAMANDER_FIREBRAND,
    MONS_SALAMANDER_MYSTIC,

    MONS_ASTERION,
    MONS_NATASHA,
    MONS_VASHNIA,

    MONS_BLOCK_OF_ICE,
    MONS_GUARDIAN_GOLEM,
    MONS_SPELLFORGED_SERVITOR,
    MONS_OCTOPODE_CRUSHER,
    MONS_CRAB,
    MONS_GHOST_CRAB,
    MONS_TORPOR_SNAIL,
    MONS_MNOLEG_TENTACLE,
    MONS_MNOLEG_TENTACLE_SEGMENT,
    MONS_BENNU,
    MONS_USHABTI,
    MONS_DEATH_SCARAB,
    MONS_ANUBIS_GUARD,
    MONS_CAUSTIC_SHRIKE,

    MONS_ROBIN,

    MONS_SHARD_SHRIKE,
    MONS_SINGULARITY,
    MONS_SALAMANDER_STORMCALLER,
    MONS_ENTROPY_WEAVER,
    MONS_MOON_TROLL,
    MONS_MUTANT_BEAST,
    MONS_JUGGERNAUT,
    MONS_SPARK_WASP,
    MONS_DOOM_HOUND,
    MONS_DEEP_ELF_ELEMENTALIST,
    MONS_DEEP_ELF_ARCHER,
    MONS_DEMONIC_PLANT,
    MONS_WITHERED_PLANT,
    MONS_DART_SLUG,
    MONS_HOWLER_MONKEY,
    MONS_ANCESTOR,
    MONS_ANCESTOR_KNIGHT,
    MONS_ANCESTOR_BATTLEMAGE,
    MONS_ANCESTOR_HEXER,
    MONS_MELIAI,
    MONS_BAI_SUZHEN,
    MONS_BAI_SUZHEN_DRAGON,
    MONS_SALTLING,
    MONS_IMPERIAL_MYRMIDON,
    MONS_SERVANT_OF_WHISPERS,
    MONS_PEACEKEEPER,
    MONS_RAGGED_HIEROPHANT,
    MONS_HALAZID_WARLOCK,
    MONS_DREAM_SHEEP,
    MONS_FROG,
    MONS_BARACHI,
    MONS_BULTUNGIN,             // remove this someday
    MONS_TEST_STATUE,
    MONS_FOXFIRE,
    MONS_MAGGIE,
    MONS_NAMELESS,
    MONS_ARMATAUR,
    MONS_BLOATED_HUSK,
    MONS_BUNYIP,
    MONS_GOLIATH_FROG,
    MONS_ELEIONOMA,
    MONS_FENSTRIDER_WITCH,
    MONS_WILL_O_THE_WISP,
    MONS_TEST_BLOB,
    MONS_DREAD_LICH,
    MONS_DEEP_ELF_AIR_MAGE,
    MONS_ANIMATED_ARMOUR,
    MONS_ROCKSLIME,
    MONS_QUICKSILVER_OOZE,
    MONS_IRONBOUND_FROSTHEART,
    MONS_IRONBOUND_THUNDERHULK,
    MONS_IRONBOUND_BEASTMASTER,
    MONS_SALAMANDER_TYRANT,
    MONS_MLIOGLOTL,
    MONS_CACTUS_GIANT,
    MONS_CREEPING_INFERNO,
    MONS_SEARING_WRETCH,
    MONS_STOKER,
    MONS_QUICKSILVER_ELEMENTAL,
    MONS_CRYSTAL_ECHIDNA,
    MONS_PUTRID_MOUTH,
    MONS_TAINTED_LEVIATHAN,
    MONS_WENDIGO,
    MONS_NARGUN,
    MONS_HEADMASTER,
    MONS_LIVING_SPELL,
    MONS_WALKING_TOME,
    MONS_EARTHEN_TOME,
    MONS_CRYSTAL_TOME,
    MONS_DIVINE_TOME,
    MONS_FROSTBOUND_TOME,
    MONS_STRANGE_MACHINE,
    MONS_SPECTATOR,
    MONS_BOUND_SOUL,
    MONS_PHARAOH_ANT,
    MONS_STEELBARB_WORM,
    MONS_JOROGUMO,
    MONS_BROODMOTHER,
    MONS_CULICIVORA,
    MONS_SUN_MOTH,
    MONS_RADROACH,
    MONS_PARGHIT,
    MONS_JOSEPHINA,
    MONS_AMAEMON,
    MONS_LODUL,
    MONS_VV,
    MONS_ZENATA,
    MONS_METEORAN,
    MONS_GRUNN,
    MONS_STARFLOWER,
    MONS_SICKLY_MERFOLK_SIREN,
    MONS_MALARIOUS_MERFOLK_AVATAR,
    MONS_SKYSHARK,
    MONS_SLEEPCAP,
    MONS_CERULEAN_IMP,
    MONS_FORMLESS_JELLYFISH,
    MONS_JEREMIAH,
    MONS_BOULDER,
    MONS_ARCANIST,
    MONS_FLOATING_EYE,                 // genus
    MONS_ANTIQUE_CHAMPION,
    MONS_KOBOLD_BLASTMINER,
#endif

    NUM_MONSTERS,               // used for polymorph

    // MONS_NO_MONSTER can get put in savefiles, so it shouldn't change
    // when NUM_MONSTERS increases.
    MONS_NO_MONSTER = 1000,

    RANDOM_MONSTER = 2000, // used to distinguish between a random monster and using program bugs for error trapping {dlb}
    RANDOM_TOUGHER_MONSTER, // used for poly upgrading monsters.
    RANDOM_MOBILE_MONSTER, // used for monster generation (shadow creatures)
    RANDOM_COMPATIBLE_MONSTER, // used for player shadow creatures (prevents repulsing summons)
    RANDOM_BANDLESS_MONSTER,
    RANDOM_POLYMORPH_MONSTER, // choose from a per-monster set

    // A random draconian, either base coloured drac or specialised.
    RANDOM_DRACONIAN,
    // Any random base draconian colour.
    RANDOM_BASE_DRACONIAN,
    // Any random specialised draconian, such as a draconian knight.
    RANDOM_NONBASE_DRACONIAN,

    RANDOM_DEMON_LESSER,               //    0: Class V
    RANDOM_DEMON_COMMON,               //    1: Class III-IV
    RANDOM_DEMON_GREATER,              //    2: Class I-II
    RANDOM_DEMON,                      //    any of the above

    RANDOM_MODERATE_OOD, // +5 depth, AKA '9' glyph on maps
    RANDOM_SUPER_OOD, // *2 + 4 depth, AKA '8'

    WANDERING_MONSTER = 3500, // only used in monster placement routines - forced limit checks {dlb}
};
COMPILE_CHECK(NUM_MONSTERS < MONS_NO_MONSTER);

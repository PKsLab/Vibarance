#ifndef GUARD_CONFIG_OVERWORLD_H
#define GUARD_CONFIG_OVERWORLD_H

// Movement config
#define OW_RUNNING_INDOORS          GEN_LATEST  // In Gen4+, players are allowed to run indoors.

// Other settings
#define OW_POISON_DAMAGE            GEN_LATEST // In Gen4, Pokémon no longer faint from Poison in the overworld. In Gen5+, they no longer take damage at all.

// PC settings
#define OW_PC_PRESS_B               GEN_LATEST // In Gen4, pressing B when holding a Pokémon is equivalent to placing it. In Gen3, it gives the "You're holding a Pokémon!" error.

// Out-of-battle Ability effects
#define OW_SYNCHRONIZE_NATURE        GEN_LATEST // In Gen8, if a Pokémon with Synchronize is leading the party, it's 100% guaranteed that wild Pokémon will have the same Nature, as opposed to 50% previously. Stationary Pokémon are excluded in Gen3. In Gen6, all No Eggs Discovered gift Pokémon will have the same Nature, while in Gen7 all gift Pokémon will, regardless of Egg Group - In Gen 8, no gift Pokémon are affected. In Gen9, this ability has no out-of-battle effect.

// Overworld flags
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define OW_FLAG_NO_ENCOUNTER        0  // If this flag is set, wild encounters will be disabled.
#define OW_FLAG_NO_TRAINER_SEE      0  // If this flag is set, trainers will not battle the player unless they're talked to.
#define OW_FLAG_NO_COLLISION        0  // If this flag is set, the player will be able to walk over tiles with collision. Mainly intended for debugging purposes.

#endif // GUARD_CONFIG_OVERWORLD_H

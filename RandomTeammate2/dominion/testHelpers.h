#ifndef _testHelpers_H
#define _testHelpers_H

#include "dominion.h"

int newSmithy(int player, struct gameState *state, int handPos);
int newVillage(int currentPlayer, struct gameState *state, int handPos);
int newAdventurer(int currentPlayer, struct gameState *state);
int newMine (int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2);
int newCouncil_room (int currentPlayer, struct gameState *state, int handPos);


#endif

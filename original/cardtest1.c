/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3, unit testing
** Title: 	cardtest1.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include "testHelpers.h" 
#include <stdlib.h>

// tests the newSmithy refactored function

int main ()
{
	printf("\ncardtest1 smithy starting...\n");

	//create a new game
	struct gameState state;
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	initializeGame(numPlayers, kCards, rando, &state); 

	//starting hand 
	state.hand[0][0] = smithy;
	state.handCount[0] = 1;
	
	//ensure hand is effectively set
	assert(cardEffect(smithy, -1, -1, -1, &state, 0, 0) == 0);
	
	if(state.handCount[0] == 3) {
		printf("correct: %d\n", state.handCount[0]);
	}else{
		printf("incorrect: %d\n", state.handCount[0]);
	}
	
	printf("...cardtest1 finished: Passed if message shown\n"); 
	return 0;
}
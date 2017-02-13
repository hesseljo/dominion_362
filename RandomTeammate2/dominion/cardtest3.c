/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3, unit testing
** Title: 	cardtest3.c
*/
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include "testHelpers.h"
#include <stdlib.h>

int main ()
{

	printf("\ncardtest3 newVillage starting...\n");

	//create a new game
	struct gameState* state = malloc(sizeof(struct gameState));
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	initializeGame(numPlayers, kCards, rando, state); 

	int startingCount = state->handCount[0];
	
	villageCard(0, state, 2);
	assert(startingCount == state->handCount[0]);
    printf("...cardtest3 finished: Passed if message shown\n");

    return 0;

}


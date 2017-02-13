/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3, unit testing
** Title: 	cardtest2.c
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

	printf("\ncardtest2 adventurer starting...\n");

	//create a new game
	struct gameState* state = malloc(sizeof(struct gameState));
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	initializeGame(numPlayers, kCards, rando, state); 

	int i;
	// place cards in players hand
	for(i = 0; i < 5; i++)
	{
		state->hand[1][i] = estate;
		state->handCount[1]++; 
	}
	
	assert(state->handCount[1] == 5); // verify 5 cards added
	
/*
	int count = 5;
	newAdventurer(1, state);
	count = count + 1;
	assert(state->handCount[1] == count);
*/
    printf("...cardtest2 finished: Passed if message shown\n");

    return 0;
	

}

/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3
** Title: 	unittest.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

//unit test numHandCards()

int main() {
   
	printf("\nunittest3 numHandCards() starting...\n");

	//create a new game
	struct gameState state;	
	int players = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	initializeGame(players, kCards, 2, &state); 

	// should start with 5 cards everytime
	assert(numHandCards(&state) == 5);
	printf("numHandCards() state is 5: Passed!\n");

	printf("...unittest3 numHandCards() finished\n");
    return 0;
}

/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3
** Title: 	unittest4.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

// unit testing the initializeGame() function

int main() {
   
	printf("\nunittest4 initializeGame() starting...\n");

	//create a new game
	struct gameState* state = malloc(sizeof(struct gameState));
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	//initializeGame(numPlayers, kCards, rando, state);

	assert(initializeGame(numPlayers, kCards, rando, state) == 0);
	printf("initializeGame() state is 0: Passed!\n");
	
	printf("...unittest4 initializeGame() finished\n");
	
    return 0;
}

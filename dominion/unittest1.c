/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3
** Title: 	unittest1.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

// updateCoins() unit test

int main() {
	
	printf("\nunittest1 updateCoins() starting...\n");

	//create a new game
	struct gameState* state = malloc(sizeof(struct gameState));
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	initializeGame(numPlayers, kCards, rando, state); 
	
	//initialize bonus variables 
	int bonus1 = 1;
	int bonus2 = 2;
	int bonus3 = 5;
	int bonus4 = 8;
	
	//force player 1's hand
	state->hand[1][0] = copper;
	state->hand[1][1] = gold;
	state->hand[1][2] = silver;
	state->hand[1][3] = estate;
	state->hand[1][4] = copper;
	state->handCount[1] = 5; 
	
	int assert1 = 8;
	int assert2 = 9;
	int assert3 = 12;
	int assert4 = 15;

	updateCoins(1, state, bonus1);
	assert(state->coins == assert1);
	printf("assert1: passed\n");

	updateCoins(1, state, bonus2);
	assert(state->coins == assert2); 
	printf("assert2: passed\n");

	updateCoins(1, state, bonus3);
	assert(state->coins == assert3); 
	printf("assert3: passed\n");

	updateCoins(1, state, bonus4);
	assert(state->coins == assert4); 
	printf("assert4: passed\n");
	// end of test
    printf("...unittest1 finished\n");

    return 0;

}

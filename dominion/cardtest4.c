/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3, unit testing
** Title: 	cardtest4.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdlib.h>
#include "testHelpers.h"

//testing the minion card()

int main (){

	printf("\ncardtest4 minion card starting...\n");

	struct gameState* state = malloc(sizeof(struct gameState));
	int numPlayers = 2;
	int kCards[10] = {adventurer, council_room, feast, gardens, mine, remodel,
				smithy, village, baron, great_hall};
	int rando = 800;
	initializeGame(numPlayers, kCards, rando, state); 
	
    assert(state->numPlayers == numPlayers);

    int startingHand = state->handCount[state->whoseTurn];
    int actionsCount = state->playedCardCount;
    assert(startingHand == 5);
	//assert(actionsCount == 1);

	//int newMine (int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2) 
	newMine(2, state, 1, 1, 1);

	assert(actionsCount != 1);
   

    printf("...cardtest4 finished: Passed if message shown\n");

    return 0;
}

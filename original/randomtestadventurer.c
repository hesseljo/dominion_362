#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define MAX_TESTS 1000
//globals
int passed = 0;
int failed = 0;

int main() {

  int k[10] = {adventurer, smithy, minion, village, 
    mine, cutpurse, sea_hag, tribute, embargo, council_room};
  int i, j;
  int pCount, aPlayer, seed;
  int startHandCount, startDeckCount;
  int treasureCardCount = 0;
  struct gameState state;
  
  srand(time(NULL));
  
  printf("start of random testing of the adeventurer card\n");

 
  for (i = 0; i < MAX_TESTS; i++) 
  {
    printf("testing iteration: %d\n", i + 1);

    pCount  = rand() % 3 + 2; //even
    aPlayer = rand() % pCount; 
    seed    = rand();

    initializeGame(pCount, k, seed, &state);

    state.deckCount[aPlayer]    = rand() % MAX_DECK;
    state.discardCount[aPlayer] = rand() % MAX_DECK;
    state.handCount[aPlayer]    = rand() % MAX_HAND;

    for (j = 0; j < state.deckCount[aPlayer]; j++) 
    {
      state.deck[aPlayer][j] = rand() % (adventurer);
    }
    
        for (j = 0; j < state.handCount[aPlayer]; j++) 
    {
      state.hand[aPlayer][j] = rand() % (adventurer);
    }

    for (j = 0; j < state.discardCount[aPlayer]; j++) 
    {
      state.discard[aPlayer][j] = rand() % (adventurer);
    }
    
    //set to random values
    startHandCount = state.handCount[aPlayer];
    startDeckCount = state.deckCount[aPlayer];

    for (j = 0; j < state.handCount[aPlayer]; j++) 
    {
      if (state.hand[aPlayer][j] == gold || state.hand[aPlayer][j] == silver || state.hand[aPlayer][j] == copper) 
      {
        treasureCardCount++;
      }
    }

    cardEffect(adventurer, 0, 0, 0, &state, 0, NULL);

    for (j = 0; j < state.handCount[aPlayer]; j++) {

      if (state.hand[aPlayer][j] == gold || state.hand[aPlayer][j] == silver || state.hand[aPlayer][j] == copper) 
      {
        treasureCardCount--;
      }
    }

    //check the treasure cards 
    if ((state.handCount[aPlayer] == startHandCount + 2) && treasureCardCount <= 0 ) 
    {
      printf("treasure cards added\n");
      
      passed++; //add to passed counter
    } 
    else
    {
      printf("no treasure cards added\n");
      
      failed++; //add to failed counter
    }

  }

  return 0;
}

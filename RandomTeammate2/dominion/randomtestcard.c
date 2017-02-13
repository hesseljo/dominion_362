#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  
  int i, j, l; //loop variables
  int pCount = 4; //set player count to 4 (maximize randomized values)
  int discarded = 1;
  int newC = 3;
  //intialize game state
  struct gameState start, end;
  //set cards array
  int k[10] = {adventurer, smithy, minion, village, 
    mine, cutpurse, sea_hag, tribute, embargo, council_room};
     
  srand(time(NULL));

  //loop for players set equal to pCount
  for(i = 0; i < pCount; i++){
    //nested loop for number of players <1000
    for(j = 0; j < 1000; j++){
      printf("player %d, iteration %d\n", i +  1, j + 1);
      initializeGame(pCount, k, 1000, &start);

      start.whoseTurn = i;
      //random 
      start.handCount[i] = rand() % MAX_HAND + 1;
      //random
      start.deckCount[i] = rand() % MAX_DECK + 1;
      //make a copy of the gameState
      memcpy(&end, &start, sizeof(struct gameState));

      for (l = 0; l < end.deckCount[i]; l++)
      {
        end.hand[i][l] = rand() % 25;
      }
      for(l = 0; l < end.handCount[i]; l++)
      {
        end.hand[i][l] = rand() % 25;
      }
        
      //call for tested card
      cardEffect(smithy, 0, 0, 0, &end, 0, 0);

      printf("start.deckCount = %d, end.deckCount = %d\n", start.deckCount[i], end.deckCount[i]);
      printf("start.handCount = %d, end.handCount = %d\n", start.handCount[i], end.handCount[i]);
      printf("start.discardCount = %d, end.discardCount = %d\n", start.discardCount[i], end.discardCount[i]);
      printf("deck count = %d, expected = %d\n", end.deckCount[i], start.deckCount[i] - newC);
      printf("hand count = %d, expected = %d\n", end.handCount[i], start.handCount[i] + newC - discarded);

      if (end.deckCount[i] == start.deckCount[i] - newC)
      {
        printf("deckCount failed\n");
      }
      else
      {
        printf("deckCount passed\n");
      }

      if (end.handCount[i] == start.handCount[i] + newC - discarded)
      {
        printf("handCount test faile\n");
      }
      else
      {
        printf("handCount test passed\n");
      }
    }
  }
  return 0;
}
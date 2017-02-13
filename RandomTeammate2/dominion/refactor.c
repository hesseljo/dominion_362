/*July 3, 2016



Under caseEffect the following was refactored.

-adventurerCard
-smithyCard
-villageCard
-greatHallCard
-outPostCard

The methods were placed at the top of dominion.c and the methods were called in the appropriate location under the cardEffect switch statement.

In the following four methods the following bugs were introduced.

-smithyCard - the int i in the for statement was changed from < 3 to < 2
-villageCard - state->numActions = state->numActions + 2; was commented out
-greatHallCard -  //state->numActions++;
                  state->numActions--;//decremented instead of incremented
-outPostCard - //state->outpostPlayed++;  was commented out

*/

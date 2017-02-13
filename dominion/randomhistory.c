/*
** Name:	Joshua Hesseltine
** Date: 	July 24 2016
** Desc:	Assignment 4
** Title: 	randomhistory.c
*/

/*
gcov reuslts:

File 'randomtestadventurer.c'
Lines executed:100.00% of 43
Branches executed:100.00% of 28
Taken at least once:96.43% of 28

File 'randomtestcard.c'
Lines executed:89.19% of 37
Branches executed:100.00% of 12
Taken at least once:83.33% of 12

File 'dominion.c'
Lines executed:23.76% of 644
Branches executed:25.18% of 417
Taken at least once:17.75% of 417

SMITHY:
For the smithy card I continued with the same testing logic as with the randomtestadventurer
class. Essentially starting by creating a random deck count and random hand count. The purpose
here is to create a new gamestate with a new player and iterate over the randomness of thier 
hand counts and deckcount to verify smith card mechanics. Coverage was improved by selecting the 
smithy card everytime. In order to validate the smithy coverage, O used the deck count - the new cards in the hand
is equal to the deck count final count.

Additionally I used the start of the hand count + new cards - discarded cards is = to the end handcount to
ensure the tests passed for each iteration. 

ADEVENTURER:
For the Adventurer card I orignally tried to call a new deck in a while loop before stumbling across
the idea to iterate over each new gamestate with a new randomized hand and deck count but quickly 
figured out I was getting 0% coverage and couldn't figure out why.

I then looked to defining a treasurecard count and back filling the deck and card count to see if they were accurate.
This led me to define and randomize by each instead all at once:
    state.deckCount[aPlayer]    = rand() % MAX_DECK;
    state.discardCount[aPlayer] = rand() % MAX_DECK;
    state.handCount[aPlayer]    = rand() % MAX_HAND;

Which in turn increased my coverage to 25% for dominion.c and 100% for the adventurer card:
File 'randomtestadventurer.c'
Lines executed:100.00% of 43
Branches executed:100.00% of 28
Taken at least once:96.43% of 28

After figuring this out, which took some digging, I was able to interate over each new random gamestate and 
add additional random values such as state.deck[aPlayer][j] = rand() % (adventurer);
To check validity, 	I added treasures and then discarded them in order to achieve the 100%
coverage goal.

*/
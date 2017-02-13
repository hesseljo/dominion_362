/*

Joshua Hesseltine 
CS362 Summer2016
Assignment 5 
BugsInTeammate.C

*/

NOTE: Our group is made of only two /hesselo and /rappab, per the instructions from the
professor, we are testing each others code base, then picking a random students repo.

1st and ONLY Teammate (Alex Rappa) Test Results (/hesseljo/ONLYTeamate1/dominion)

unittestresults.out produced 1 error: undefined reference to `newVillage'
collect2: error: ld returned 1 exit status

error is produced from my newVillage call in test #

unittest1:  updateCoins() PASSED

unittest2: 	getCost() PASSED

unittest3:  numHandCards() PASSED

unittest4:  initializeGame() PASSED

cardtest1:  BUG -- FAILED. The smithy card should have a hand count == 3. Hand count was 4.

cardtest2:	PASSED. 

cardtest3: BUG -- FAILED to compile, refactored dominion.c in /ONLYTeammate1/domionion/dominion.c file
in order to properly run the test. 

Result after refactor: PASSED.

cardtest4: FAIlED to compile, refactored dominion.c in /ONLYTeammate1/domionion/dominion.c file
and cardtest4.c in order to properly run the test. 

Result after refactor: PASSED.

randomtestadventurer: warning: variable ‘startDeckCount’ set but not used
The results here are odd, was able to randomly add tresure cards, 
and unable to add treasure cards every other iteration. This is a failure, but need to research the odd behavior. 

randomtestcard: BUG-- warning: variable ‘u’ set but not used [-Wunused-but-set-variable]
random cardEffect() on smithy
deckCount passed
handCount test passed

Based on the behavior + new card - discarded cards the tests should have failed. I discovered my if/else
block was reversed and thereby incorrect. The test failed. 

------------------------------------------------------------------------------------------

2nd Randomly selected student directory:  jenkinsm/dominion/ 

unittestresults.out >> produced a fatal compile error because my test rely on the testHeleprs.h file
need to modify the dominion.c and add testHelpers for this code base.

unittest1:  updateCoins() PASSED.

unittest2: 	getCost() PASSED.

unittest3:  numHandCards() PASSED.

unittest4:  initializeGame() PASSED.

cardtest1:  PASSED.

cardtest2:	PASSED.

cardtest3:  PASSED.

cardtest4:  PASSED.

randomtestadventurer: FAILED. BUG: No treasure cards were added to the hand

WARNING: 
dominion.c: In function ‘cardEffect’:
dominion.c:746:17: warning: ‘cardDrawn’ may be used uninitialized in this function [-Wmaybe-uninitialized]
   adventurerCard(drawntreasure, state, currentPlayer, cardDrawn, temphand, z);
                 ^
randomtestadventurer.c:22:23: warning: variable ‘startDeckCount’ set but not used [-Wunused-but-set-variable]
   int startHandCount, startDeckCount;

randomtestcard: FAILED. Bug: hand count and deckcount did not match but matched in the test. Need
to debug the values allocated everytime the state changes.  


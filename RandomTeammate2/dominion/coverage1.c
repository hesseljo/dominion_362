/*
* CS 362
* Week 3 Assignment 3 - Unit and Card Tests
* Mike Jenkins
*/

/*-----UNIT TEST 1 -----*/

Description:  Tests initializeGame()

Coverage:  This test covered 96.77% of all lines and 100% of all branches

Implications: To cover all the lines I'll need to more fully implement the loop that sets the number of Kingdom cards

/*-----UNIT TEST 2 -----*/

Description:  Tests kingdomCards()

Coverage: All lines were executed.  There are no branches here.

Implications: This was a simple task with no possible branches. Not much more can be used 

/*-----UNIT TEST 3 -----*/

Description:  Tests upateCoins()

Coverage: 100% of all lines, statements and branches were executed.

Implications: The tests necessary to test here were to implment all the types of coins.  This covers all the branches and lines.

/*-----UNIT TEST 4 -----*/

Description:  Tests shuffle()

Coverage: 100% of all lines, statements and branches were executed.

Implications: The idea here was to ensure that the card positions are not the same after the shuffle.  If this pans out then the shuffle was successful.  However I needed to test when the deckCount is <1.

/*-----CARD TEST 1 -----*/

Description:  Tests adventurerCard()

Coverage: 100% of all lines, statements and branches were executed.

Implications: This was the most complicated of the cards being tested.  To accurately test all cases is was necessary to try cases with the coins in different positions of the deck as well as test with a deck that doesn't have coins.  This ensured all lines were tested.

/*-----CARD TEST 2 -----*/

Description:  Tests smithyCard()

Coverage: 100% of all lines, statements and branches were executed.

Implications: This was a simple test.  Whenever smithy is played three cards are drawn.  Simply check that the necessary counts within the deck and hand are accurate.

/*-----CARD TEST 3 -----*/

Description: Tests greatHallCard()

Coverage: 100% of all lines and statements were executed.

Implications: This test was simliar to the smithy in what was required to check except that a second check of the actions was required.  There were no branches to be executed.

/*-----CARD TEST 4 -----*/

Description:  Tests villageCard()

Coverage: 100% of all lines and statements were executed.

Implications: This test was near identical to the great hall except that a second action was included.  There were no branches so a simple call to villageCard covered all lines.
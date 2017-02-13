/*
*	CS 362
*	Mike Jenkins
* Assignment 4 Random History
*
*/

/*randomtestadventurer.c:
My test for this method included randomizing the cards in the deck as well as the cards in the hand and randomizing the player that played.  There were a few things that I had to ensure were set in order for the test to fully function.  I had to ensure that at least two cards in the deck were coin cards.  I also had to ensure that the deck size as well as the cards in hand were reset otherwise the deck would just become empty throughout the testing because the test was in a for loop.  As far as coverage it was much better than my first adventure cards test early in the quarter.  The for loop allowed the test to run ten times however I could have increased it to 10,000.  I figured that was not feasible for analysis if I wanted to see the tests pass.  Analysing 10,000 test cases is just not doable.  The tests were very similar to the original card test for the adventure method that was executed earlier in the quarter.  Some slight changes however had to include that my discard pile was either the same as before or greater, my deck as at least two cards more empty and my hand had at least two more cards.  I had 100% branch coverage for this test.


randomtestcard.out:
I chose to implement the village card.  This was because I was familiar with this cards method and already had the tests in place.  This test was very similar to the previous few weeks tests.  I just had to ensure that my hand had one more card, my deck had one less card and my I had two more actions.  It's important to note that for this test however because I have bugs that I intentionally injected in the code it will not pass the tests.  I did not remove the bugs from the code because to my knowledge I was not instructed to do so.  I randomizied the same things as in the test above.  I randomized the deck, the cards in my hand, and randomized the players turn.  Again my test coverage here was 100%.  My branch coverage was 100% for this test.  I can only assume that in testing it's often very needful to randomize the test inputs.  This ensures that many test cases are executed as well as the extremities.  This was a good exercise in opening my view of randomizing test cases.
*/
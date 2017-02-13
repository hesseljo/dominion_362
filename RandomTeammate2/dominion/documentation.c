/*
CS 362 Assignment 2
Mike Jenkins

Smithy:  Smithy is an action card that can be played during the action phase of the game.  Smithy allows you to draw three additional cards.

Adventurer:	Adventurer is another action card also played during the action phase.  This card allows the player to reveal all the cards in your hand until you discover two treasure cards.  At that point the two treasure cards are kept while the other revealed cards are discarded.

discardCard():	First this method checks if the card has been placed in the played pile and does it if not.  If the desired card to be discarded is the last card or the only card the card count is decremented.  Otherwise the discarded cards position is given to the last card in the hand and the last card is set to a value of -1.

updateCoins():	Coin count if first reset to zero as is the case for each buying phase.  The proper coin value is then added for each coin type (copper, Silver and Gold).
*/
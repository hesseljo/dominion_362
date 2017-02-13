/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 2, overview of cards and functions
** Title: 	documentation.c
*/


/*
 SMITHY: This is a card that has the ability to draw three cards from the current deck, in the current turn. The logic is in the drawCard() function. The loop is iterated over 3 times. After the cards are issued, the Smithy card is discarded by the discardCard() function.
 
 ADVENTURER: This is deemed an action card that repeatidly allows the drawing of cards and adds those cards to the players hand. Two treasure cards are drawn. The adventurer method runs a while loop that counts the number of tresure cards drawn until reaching two cards. The method check to verify the deck isn't empty, if it is in fact an empty deck, then the deck gets reshuffled by calling that method. The drawCard() method is used to draw a card and the counter increments to determine the number of treasure cards outputted thus far.
 */

/*
 UPDATECOINS():
 This function updateCoins() uses a for loop to check for coins. If a coin exists, then the total amount is incremented by adding to the amount of coins held in memeory. The gameState is a parameter passed that uses the bonus variable as a condition dererefrencing it and adding additional bonuses from previous user hands.
 */

/*
 DISCARDCARD()
 The discardCard function checks to see if the card has been trashed, then sets the card to -1, or sets the card to be discarded. The final card in the current players hand is discarded and the total card count is decremented 1. If only one card still exsists, then theres a check to prevent an excpetion, then the final current hand card is refreshed.
*/



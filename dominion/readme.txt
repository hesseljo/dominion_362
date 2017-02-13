/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 2
** Title: 	documentation.card
*/






/* SMITHY 
	Smithy is an action card that allows drawing 3 cards from the deck, so we iterate through a drawCard() loop 3 times. This function draws a random card and puts it in the players hand (along with taking into account the game state). 
*/

/* ADVENTURER 
	Adventurer is an action card that allows drawing cards from the player's deck until 2 treasure cards are drawn. The code has a while loop which keeps track of the treasure cards drawn (it will go until that reaches 2). There's a check in case of an empty deck (if it is, it's shufled). Each card is drawn with the drawCard() function and it's checked to see if it's a treasure card and increase the counter if it is. If it's not, it's stored in temp and removed from the temp hand after the two treasure cards have been found.
*/

/* UPDATECOINS()
	updateCoins uses a for loop to iterate through the players hand with conditionals to check for coins. If there's a coin, that amount of coins is added to the coin count. After iterating through the hand, the game state's bonus variable is dereferenced and existing bonuses from previous action(s) are added. 
*/

/* DISCARDCARD()
	discardCard uses a conditional to check if the card is trashed, then sets the played card to -1 to be discarded. The last card in the players hand is removed and total cards is decremented by 1. If there's only one card, there's a separate conditional to keep from throwing an exception. Then the last card in the hand is updated.
*/
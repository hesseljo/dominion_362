/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 2, defines the changes made to dominion.c file
** Title: 	refactor.c
*/


// List of bugs

/*
 
 1) newAdventurer (int currentPlayer, struct gameState *state)
	@665 changed copper and gold to silver
	@673 modifed while(z-1>=0) to (z-1>0)
 
 2) newSmithy (int currentPlayer, struct gameState *state, int handPos)
 	@685 changed 3 to 4
 	@685 changed > to <

 3) newMine (int currentPlayer, struct gameState *state, int handPos, int choice1, int choice2)
	@762 commented out the drawCard()
	@765 changed ++ to -- decremented vice incremented

 4) newCouncil_room (int currentPlayer, struct gameState *state, int handPos)
 	@701 changed > 4 to > 5

 5) newVillage (int currentPlayer, struct gameState *state, int handPos)
 	@730 chnaged 2 to 3
 */


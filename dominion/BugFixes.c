/*
Joshua Hesseltine
Title: BugFixes.c
Description: List of bugs needed to be fixed in my dominion.c file as pointed out by my teamate: /rappab in /rappab/dominion/BugsInTeammate.c
*/

// Fixed bugs:

/*
1) Fixed newAdventurer() to add copper and gold and allow a value
of 0 as a possible count #
Tracebility:
Bug 4 from Teammate1
Bug 1 from assignment2

2) Removed 4 possible cards from smithy() and allowed the count to be up to 
3 cards. This should have broken any smithy implementation!?!
Tracebility:
Bug 3/Bug2 from Teammate1
Bug 2 from assignment2

3) Introduced the discardHand() function back into the newMine() function.
Tracebility:
Bug 1/Bug2 from Teammate1
Bug 3 from assignment2

4) Removed the ability to loop to 5 cards in council_room() function
Tracebility:
Bug 6 from Teammate1
Bug 4 from assignment2

5) Changed the newVillage addition of only 2 cards vice 3 which caused the cardEffect() bugs
This also fixed bug 1 and bug 2 below.
Tracebility:
Bug 5/Bug2 from Teammate1
Bug 5 from assignment2

/* REFERENCE----------------------------------------------

Teamate1 and ONLY teammate list of bugs found in my code

	- 5 Bugs were found:
		Bug 1: Excess Kingdom Cards
		Bug 2: Improper Score Summation
		Bug 3: Smithy Card
		Bug 4: Adventurer Card
		Bug 5: Village Card
		Bug 6: Council Room Card
 
List of introduced bug from assignment2:
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


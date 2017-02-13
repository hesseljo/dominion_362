/*

-----------------------START CARDTESTS-----------------------------
cardtest1.c:
	Statements:
		The newSmithy function created last assignment adds 3 cards to any players
		handwhen called. The purpose of the cardtest1 is to assert on the handcount to verify its value

	Branches:
		N/A

	Boundaries:
		Options here might be adding additional hands or drawing one card in a very large hand, but the value add 
		might be difficult to ascertain in this case.

	Implications:
		One branch is tested.

cardtest2.c
	Statements: 
		The newAdventurer card is tricky. It allows a player to call the drawCard() function until he/she has 
		2 treasure cards in their hand. Then all current hand cards are discarded. This ends up placing one additional card in
		the players hand and two more treasure cards.

	Branches: 
		This is functional during runtime. So we test it functionally. 
		i.e. when the player has two additional treasure cards and one additional
		card. Starting off by asserting the handcount and checking to verify followed by
		sending a new adventurer card and checking the count. 

	Boundaries: 
		Treasure card count. Since we only need two to fit the rules.

	Implications:
		Making sure we keep within the rules of the game/business logic. 

cardtest3.c
	Statements: The newVillage() lets a player draw 1 card while gaining an 2extra actions
		This increases the action count by 2.

	Branches: When the newVillage() is called the player gains a drawCard() 

	Boundaries: None.

	Implications: Calling a newVillage card in the test allows us to test the handcount with every newVillage.

cardtest4.c
	Statements: The actionsCount and handCount allows the newMine() to be called in order functionally. 

	Branches: Whenever the choices are curse or treasure map and also cost on choices.

	Boundaries: Staying within the currentHand count and state

	Implications: Keeping with the rules and business logic. 


-----------------------END CARDTEST-----------------------------

-----------------------START UNITTESTS--------------------------
unittest1.c
	Statements: the updateCoins() after the player essentially ends his/her card choosing operations/turn and buys a card
		At runtime the hand needs to be calculated accurately to allow for proper processing.
	
	Branches: There are various branches to test and most are tested. 

	Boundaries: If a player's handCount is an abnormal size with various cards or if there are 0 counted cards, which are 
		erroneous exceptions in this case.
	
	Implications: Generally, the business logic would dictae the number of neccesary checks here. 

unittest2.c
	Statements: The getCost() function takes a card number and returns a int value
	
	Branches: Every known card can be tested and is in my function
	
	Boundaries: Outside or unknown parameters, which don't exist. Therefore none. 
	
	Implications: None. Simple assert on every known value. 

unittest3.c
	Statements: The numHandCards() returns the handcount during a players turn
	
	Branches: The test covers the handcount at a given time which is the basis of the function()
	
	Boundaries: N/A
	
	Implications: Testing the handcount is suffeciant to determining the applicability and accurancy of the function
		This is a simple test.


unittest4.c
	Statements: the intializeGame() function takes the number of players, cards, decks and struct for instatiating the object for the game
	
	Branches: One culd argue that you could test every intialization scenario, but I simply randomized the count.
	
	Boundaries: Sticking to the general rules, cards, number of cards/decks is suffecient for testing purposes. 
	
	Implications: This test covers the general parameters of the function; however, in order to stress the system,
		someone could throw a randomized intializer to determine state capacity/object load. 


-----------------------END UNITTESTS----------------------------

See below per gcov run for my files

File 'unittest1.c'
Lines executed:100.00% of 34
unittest1.c:creating 'unittest1.c.gcov'

File 'unittest2.c'
Lines executed:100.00% of 47
unittest2.c:creating 'unittest2.c.gcov'

File 'unittest3.c'
Lines executed:100.00% of 8
unittest3.c:creating 'unittest3.c.gcov'

Joshuas-iMac:dominion jkhesseltine$ gcov unittest4.c
File 'unittest4.c'
Lines executed:100.00% of 9
unittest4.c:creating 'unittest4.c.gcov'

File 'cardtest1.c'
Lines executed:85.71% of 14
cardtest1.c:creating 'cardtest1.c.gcov'

File 'cardtest2.c'
Lines executed:100.00% of 13
cardtest2.c:creating 'cardtest2.c.gcov'

File 'cardtest3.c'
Lines executed:100.00% of 11
cardtest3.c:creating 'cardtest3.c.gcov'

File 'cardtest4.c'
Lines executed:100.00% of 14
cardtest4.c:creating 'cardtest4.c.gcov'
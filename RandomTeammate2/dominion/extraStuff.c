int i 12345;
char five=i[5];

54321

key =integer
values = string
hashmap test = new Hashmap([4,dom,2,chris,1,alex])
integer i =1;

array values ;
int j =0;
for (int i=1; i+2; i<test.lenght()){
  values[j++]=test[i]; 
  
}//end for

values.sort()
int tempKey
string tempValue;
for (int i=0; i<test.length(), i++){
    for (int j=1; j<test.length(), j+2{
      if (test[j]==values[i]{
        tempKey=test[j-1];
        tempValue=test[j];
      }
    }
    
}


printf("estate: %i\n", estate);
	printf("curse: %i\n", curse);
	printf("duchy: %i\n", duchy);
	printf("province: %i\n", province);
	printf("copper: %i\n", copper);
	printf("silver: %i\n", silver);
	printf("gold: %i\n", gold);
	printf("adventurer: %i\n", adventurer);
	printf("council_room: %i\n", council_room);
	printf("smithy: %i\n", smithy);
  
  printf("deckCount[Player]=%i\n", game->deckCount[player]);
	
  printf("oldDeck[%i]=%i | currentDeck[%i]=%i\n", i, oldDeck[i],i,game->deck[player][i]);
			
printf("Success Flag: %i\n", successCounter);      

	//create current deck
	for (i = 0; i < game->deckCount[player]; i++) {
		game->deck[player][i] = i;
		printf("currentDeck[%i]=%i\n", i, game->deck[player][i]);
	}//end for
  
  	for (i = 0; i < game->deckCount[player]; i++) {
		printf("currentDeck[%i]=%i\n", i, game->deck[player][i]);
	}//end for
  
  printf("DeckCount: %i\n", game->deckCount[player]);
	printf("handCount: %i\n", game->handCount[player]);
	printf("discardCount: %i\n", game->discardCount[player]);
  
  int randomCardNumber(){
	
	int randomnumber;
	randomnumber = rand() % 10;
	printf("%d\n", randomnumber);
	return 0;
}//end randomCardNumber

  printf("DeckCount: %i\n", game->deckCount[player]);
	printf("handCount: %i\n", game->handCount[player]);
	printf("discardCount: %i\n", game->discardCount[player]);
	printf("Number of Actions: %i\n", game->numActions);
	
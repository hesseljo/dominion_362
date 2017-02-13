/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3
** Title: 	unittest2.c
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"

// getCost unit test

int main() {
	
	printf("\nunittest2 getCost() starting...\n");

	int curseT = 0;
	int estateT = 2;
	int duchyT = 5;
	int provinceT = 8;
	int copperT = 0;
	int silverT = 3;
	int goldT = 6;
	int adventurerT = 6;
	int council_roomT = 5;
	int feastT = 4;
	int gardensT = 4;
	int mineT = 5;
	int remodelT = 4;
	int smithyT = 4;
	int villageT = 3;
	int baronT = 4;
	int great_hallT = 3;
	int minionT = 5;
	int stewardT = 3;
	int tributeT = 5;
	int ambassadorT = 3;
	int cutpurseT = 4;

	assert(getCost(curse) == curseT); printf("curse: passed\n");
	assert(getCost(estate) == estateT); printf("estate: passed\n");
	assert(getCost(duchy) == duchyT);printf("duchy: passed\n");
	assert(getCost(province) == provinceT);printf("province: passed\n");
	assert(getCost(copper) == copperT);printf("copper: passed\n");
	assert(getCost(silver) == silverT);printf("silver: passed\n");
	assert(getCost(gold) == goldT);printf("gold: passed\n");
	assert(getCost(adventurer) == adventurerT);printf("adventurer: passed\n");
	assert(getCost(council_room) == council_roomT);printf("council_room: passed\n");
	assert(getCost(feast) == feastT);printf("feast: passed\n");
	assert(getCost(gardens) == gardensT);printf("gardens: passed\n");
	assert(getCost(mine) == mineT);printf("mine: passed\n");
	assert(getCost(remodel) == remodelT);printf("remodel: passed\n");
	assert(getCost(smithy) == smithyT);printf("smithy: passed\n");
	assert(getCost(village) == villageT);printf("village: passed\n");
	assert(getCost(baron) == baronT);printf("baron: passed\n");
	assert(getCost(great_hall) == great_hallT);printf("great_hall: passed\n");
	assert(getCost(minion) == minionT);printf("minion: passed\n");
	assert(getCost(steward) == stewardT);printf("steward: passed\n");
	assert(getCost(tribute) == tributeT);printf("tribute: passed\n");
	assert(getCost(ambassador) == ambassadorT);printf("ambassador: passed\n");
	assert(getCost(cutpurse) == cutpurseT);printf("cutpurse: passed\n");

	printf("...unittest2 getCost() finsihed\n");
    return 0;
}

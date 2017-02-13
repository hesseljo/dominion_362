CFLAGS = -Wall -fpic -coverage -lm
GCOVFLAGS = -fpic -coverage -lm -fprofile-arcs -ftest-coverage

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS) $(GCOVFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard >> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

unittestresults.out: dominion.o rngs.o unittest1.c unittest2.c unittest3.c unittest4.c cardtest1.c cardtest2.c cardtest3.c cardtest4.c
	gcc $(GCOVFLAGS) -c dominion.c -g
	gcc -o unittest1 unittest1.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o unittest2 unittest2.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o unittest3 unittest3.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o unittest4 unittest4.c -g dominion.o rngs.o  $(CFLAGS)
	./unittest1 >> unittestresults.out
	./unittest2 >> unittestresults.out
	./unittest3 >> unittestresults.out
	./unittest4 >> unittestresults.out
	gcc -o cardtest1 cardtest1.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o cardtest2 cardtest2.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o cardtest3 cardtest3.c -g dominion.o rngs.o  $(CFLAGS)
	gcc -o cardtest4 cardtest4.c -g dominion.o rngs.o  $(CFLAGS)
	./cardtest1 >> unittestresults.out
	./cardtest2 >> unittestresults.out
	./cardtest3 >> unittestresults.out
	./cardtest4 >> unittestresults.out
	gcov dominion.c >> unittestresults.out

randomtestcard: dominion.o rngs.o
	gcc -o randomtestcard randomtestcard.c dominion.o rngs.o $(CFLAGS)

randomtestadventurer: dominion.o rngs.o
	gcc -o randomtestadventurer randomtestadventurer.c dominion.o rngs.o $(CFLAGS)

randomtestadventurer.out: randomtestadventurer
	./randomtestadventurer >> randomtestadventurer.out
	gcov dominion.c -b >> randomtestadventurer.out

randomtestcard.out: randomtestcard
	./randomtestcard >> randomtestcard.out
	gcov dominion.c -b >> randomtestcard.out

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom test.exe test player player.exe testInit testInit.exe *.gcov *.gcda *.gcno *.so cardtest1 cardtest2 cardtest3 cardtest4 unittest1 unittest2 unittest3 unittest4 *.out
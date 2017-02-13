/*
** Name:	Joshua Hesseltine
** Date: 	July 3 2016
** Desc:	Assignment 3, unit testing
** Title: 	cardtest1.c
*/

char inputChar()

// in void testMe(), the test iterates until it reaches state 9, thus we only need to pick a character randomly just once per state.
// Once the match is found, move to the next state until you reach 9. The random number is a remainder of 95 + 32 for ASCII.
// making the selection large enough to account for console outputting. 

char *inputString()

// keeping it random is key to generate the test effeciently. Essentially we need tofind the random permutation of the 'reset' 
// only once to report the error. Starting out, I looked to find 'rest' by iteration over all ASCII codes 0 to 255, which I 
// quickly realized that would requires extensive running of the program. Thus, I kept it to the lower case inputs only.
// this provides for a more reasonable testing duration. 





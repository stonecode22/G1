//Project 1: Guessing Game by Stone Yang (p6)
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
  int actual, guess; //actual = random number, guess = number that user inputs
  char choice;
    do
      {
	int gnum = 1; //initalizing "grum" (# of guesses) so when it loops back from replay it resets back to 1
	srand (time(NULL)); //random number generator
	actual = rand() % 101; //This assigns a random number to the "actual" from a range of 0-100

	cout << "Let's play a game. I'm thinking of a number between 0 and 100. Can you guess it?" << endl;
	    do
	      {
		cout << "Enter a number: ";
		cin >> guess; //asks user for a number (the guess)
		if (actual < guess) //if the random number is lower than the guess, the below happens
		  {
		    cout << "My number is lower! Try again!" << endl;
		    gnum++; //+1 to the guess counter
		  }

		else if (actual > guess) //if the random number is higher than the guess, the below happens
		  {
		    cout << "My number is higher! Try again!" << endl;
		    gnum++;
		  }
	      }
	    while (actual!=guess); //if the random number is the guess, the inside loop ends
	    cout << "Number of Guesses you took: " << gnum++ << endl; //displays # of guesses
	    cout << "You've done it! Play again? (Y/N)"; //asks user whether or not to replay the game
	    cin >> choice; //user inputs choice
      }
    while(choice !='n'); //if the choice is "n", the program is terminated; if "y", it loops back to the start
    return 0;
}


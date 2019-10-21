/*
Author: Andrew Price
Purpose: Guess the Numner Game
Date: 10/19/2019 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int randomNumber = 0;
int guess = 0;
int NumberOfGuesses;
time_t t;

// Initalize random number generator
srand((unsigned) time(&t));

// Get random numner
randomNumber = rand() % 21;

printf("\nThis is a guessing game.");
printf("\nI have chosen a number between 0 and 20, which you must guess.\n");

for(NumberOfGuesses = 5 ; NumberOfGuesses > 0 ; --NumberOfGuesses)
{
    printf("\nYou have %d tr%s left.", NumberOfGuesses, NumberOfGuesses == 1 ? "y" : "ies");
    printf("\nEnter a guess: ");
    scanf("%d", &guess);

    if(guess == randomNumber)
    {
        printf("\nCongradualtions! You guessed it!\n");
        return 0;
    }
    else if(guess < 0 || guess > 20 )  //Checking for invalid guess
        printf("\nI said the number is between 0 and 20.\n");
    else if(randomNumber > guess)
        printf("Sorry. %d is wrong. My nmber is grater than that.\n", guess);
    else if(randomNumber < guess)
        printf("Sorry. %d is wrong. My nmber is less than that.\n", guess);
}
printf("\nYou have had 5 tries and failed. The number was %d\n", randomNumber);
  
return 0;
}

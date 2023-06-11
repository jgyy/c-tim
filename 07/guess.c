#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    unsigned int guess = 0;
    unsigned int randomNumber = 0;
    unsigned int numberOfGuesses = 5;
    time_t t;

    srand((unsigned)time(&t));
    randomNumber = rand() % 21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20 which you must guess.\n");

    for (numberOfGuesses; numberOfGuesses > 0; numberOfGuesses--)
    {
        printf("\nYou have %u tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf(" %u", &guess);

        if (guess == randomNumber)
        {
            printf("\nCongratulations. You guessed it!\n");
            return 0;
        }
        else if (guess < 0 || guess > 20)
        {
            printf("I said the number is between 0 and 20.\n");
        }
        else if (randomNumber > guess)
        {
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        }
        else if (randomNumber < guess)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n", guess);
        }
    }

    return 0;
}

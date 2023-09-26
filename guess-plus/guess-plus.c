#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//
// Created by Ignorant on 2023/9/8.
//
int main()
{
    int max = 100;
    int min = 0;
    int flag = 1;
    int key;
    int guess = 0;

A:
    int numberOfTries = 7;
    // 1.print the rules of the game to players
    printf("Let us play the Guess the Number Game.\n"
           "The computer will generate a number between %d and %d.\n"
           "You have %d tries.\n",
           min, max, numberOfTries);
    // 2.generate a random number between min and max as the secret number
    srand(time(NULL));
    int secret = rand() % max + min;
    //    printf("Test: secret = %d.\n", secret);
    // 4.obtain the guess number, compare it with the secret number, and inform the player of the result
    while (numberOfTries > 0)
    {
        // 3.ask the player to input a guess
        printf("Please input your guess.\n"
               "The secret number is %d.\n"
               "You still have %d tries.\n",
               secret, numberOfTries);
        // 5.repeat 3-4 until the player wins or loses
        scanf("%d", &guess);
        printf("Your guess is %d.\n", guess);
        if (guess == secret)
        {
            printf("You Win!\n");
            goto C;
        }
        else if (guess > secret)
        {
            printf("guess > secret\n");
        }
        else
        {
            printf("guess < secret\n");
        }
        numberOfTries--;
    }
    if (numberOfTries == 0)
    {
        printf("You lose!\n");
    }
C:
    printf("Would you like to play again?(Y/N,1 represents Y and 2 represents N):");
    scanf("%d", &key);
    if (key == 1)
    {
        goto A;
    }
    else
    {
        goto B;
    }
B:
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1; // generate a random number between 1 and 100

    printf("Welcome to the guess the number game! I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > num) {
            printf("Too high. Try again.\n");
        } else if (guess < num) {
            printf("Too low. Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }
    } while (guess != num);

    return 0;
}

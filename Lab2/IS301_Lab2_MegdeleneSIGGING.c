//Name: Megdelene Sigging
//Program: Random gueser

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get user guess
int getGuess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

// Function for success message
void successMessage() {
    printf("Congratulations! You did it.\n");
}

// Function for failure message
void failureMessage(int number) {
    printf("Sorry. The number was %d. You should have gotten it by now.\n", number);
    printf("Better luck next time.\n");
}

// Function for hints
void printHint(int guess, int number) {
    if (guess < number) {
        printf("Your guess is low. Try again:\n");
    } else if (guess > number) {
        printf("Your guess is high. Try again:\n");
    }
}

int main() {
    int randomNumber, guess;
    
    // Generate random number between 1 and 20
    srand(time(NULL));
    randomNumber = rand() % 20 + 1; // 1–20 :contentReference[oaicite:1]{index=1}

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // Loop for 5 attempts
    for (int i = 1; i <= 5; i++) {
        guess = getGuess();

        if (guess == randomNumber) {
            successMessage();
            return 0; // stop immediately
        } else {
            printHint(guess, randomNumber);
        }
    }

    // If user didn’t guess correctly
    failureMessage(randomNumber);

    return 0;
}





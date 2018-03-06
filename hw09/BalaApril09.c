/**
* This program a rock-paper-scissors game where the user plays against the computer.
* A user inputs their move choice (1 for rocker, 2 for paper, 3 for scissors), and
* from there, a random number generator is used to determine the computer's move.
* A comparison is done between the user's chosen move and the computer's chosen move,
* and the results of that match is printed to the user.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 9
* @date       2018-02-15
*/

#include <stdio.h>
#include <stdlib.h> /* For random number generator */
#include <time.h> /* For the time function. */

void gameplay();
void whoIsWinner();
void printResults();
char player;
int computerWin;
int userWin;
int tieGame;

int main() {
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("Hello! This is a rock-paper-scissors game.\n");
    printf("To quit, enter Ctrl-D (if using UH UNIX or Mac) to Ctrl-Z (if using PC).\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");

    gameplay();

    return 0;
}

/* Function that asks user for their move choice. */
void gameplay() {
    printf("\n\nEnter '1' for rock, '2' for paper, or '3' for scissors: ");
    scanf("%c", &player);

    /* When move is chosen, the whoIsWinner() function is called to determine
       computer's move, and the winner of the current match. */
    if (player == '1') {
        puts("You chose ROCK.");
        whoIsWinner();
    } else if (player == '2') {
        puts("You chose PAPER.");
        whoIsWinner();
    } else if (player == '3') {
        puts("You chose SCISSORS.");
        whoIsWinner();
    } else {
        puts("invalid move.");
    }

    /* Prints overall tally of all matches.  */
    printResults();
}

/* Function that generates the computer's move randomly. And from there,
    compares the computer's move versus the user's move to determine the
    winner of the match. */
void whoIsWinner() {
    int compChoice = 0;

    srand(time(NULL));
    /* Random number generator for computer's move. Choices are 1 (rock),
       2 (scissors), and 3 (paper) */
    compChoice = 1 + rand() % 3;

    /* Filters the choice that was randomly made for the computer, and prints
       to the user to let them know what was chosen. */
    if (compChoice == 1) {
        puts("Computer chose ROCK.");
    } else if (compChoice == 2) {
        puts("Computer chose PAPER.");
    } else if (compChoice == 3) {
        puts("Computer chose SCISSORS.");
    }

    puts("Results: ");

    /* Compares the user's move choice and computer's move choice.
       Let's player know the match result based on the moves
       that were made. Tallys are made for each tie game, computer win,
       or user win. These results are then printed as an "overall scorecard"
       using the printResults() function. */
    if (player == '1' && compChoice == 1) {
        puts("\tTie game!");
        tieGame++;
    } else if (player == '2' && compChoice == 2) {
        puts("\tTie game!");
        tieGame++;
    } else if (player == '3' && compChoice == 3) {
        puts("\tTie game!");
        tieGame++;
    } else if (player == '1') {
        if (compChoice == 2) {
            puts("\tPAPER beats ROCK.");
            puts("\tCOMPUTER wins!");
            computerWin++;
        } else if (compChoice == 3) {
            puts("\tROCK beats SCISSORS.");
            puts("\tYOU win!");
            userWin++;
        }
    } else if (player == '2') {
        if (compChoice == 1) {
            puts("\tPAPER beats ROCK.");
            puts("\tYOU win!");
            userWin++;
        } else if (compChoice == 3) {
            puts("\tSCISSORS beats PAPER.");
            puts("\tCOMPUTER wins!");
            computerWin++;
        }
    } else if (player == '3') {
        if (compChoice == 1) {
            puts("\tROCK beats SCISSORS.");
            puts("\tCOMPUTER wins!");
            computerWin++;
        } else if (compChoice == 2) {
            puts("\tSCISSORS beats PAPER.");
            puts("\tYOU win!");
            userWin++;
        }
    }
}

/* Function that prints out final results of all matches. */
void printResults() {
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("\t\t\tGame Results\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
    printf("User Wins: %d\n", userWin);
    printf("Computer Wins: %d\n", computerWin);
    printf("Ties: %d\n", tieGame);

    puts("- - - - - - Thanks for playing! Goodbye ^_____^ - - - - - - ");
}

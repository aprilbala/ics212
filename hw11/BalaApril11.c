/**
* This program asks user for input (or input redirection from a file), and then
* will count the number of times each alphabetic character (a-z, A-Z) is seen in the
* given input. The program loops through the input until an the EOF character
* is detected.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 11
* @date       2018-02-27
*/

#include <stdio.h>

void printInstructions(void);
void loopAndCountLetters(int[]);
void outputResults(int[], int);

#define SIZE 26

int main() {

    int letters[SIZE] = {0};

    /* Calls required functions for program. */
    printInstructions();
    loopAndCountLetters(letters);
    outputResults(letters, SIZE);

    return 0;
}

/* This function prints out instructions to the user. */
void printInstructions(void) {
    printf("This program will count the letters of the alphabet. \n");
    printf("Type several sentences, or use input redirection to input a file.\n");
    printf("To exit program, enter EOF (end of File) by pressing Ctrl-D\n");
}

/* This function gets the character inputs, and loops through the user's input
   and keeps a tally for each letter. This is done until an EOF is reached. */
void loopAndCountLetters(int letters[]) {
    int index = 0;

    char input = 'a';
    input = getchar();

    /* Loops through user's input until the EOF is detected. Each time a letter
       is detected, the count for that specific character is incremented. */
    while (input != EOF) {

        /* Increments the count for each letter each time the letter is seen.
           The lowercase and uppercase version of a letter does not count as
           two separate counts, they count as 1 count each towards that letter. 
           Ex: aAa --> count is 3 for 'a'*/
        if (input >= 'a' && input <= 'z') {
            index = input - 'a';
            letters[index]++;

        } else if (input >= 'A' && input <= 'Z') {
            index = input - 'A';
            letters[index]++;

        } else if (input == EOF){
            return;
        }

        input = getchar();
    }
}

/* This function outputs the count of each letter character based on
   the user's input. */
void outputResults(int letters[], int max) {
    int index = 0;

    printf("- - - - - - - - - - - -\n");
    printf("Character\t Count\n");
    printf("- - - - - - - - - - - -\n");

    /* Prints the count for each letter in the alphabet. */
    for(index = 0; index < max; index++) {
        printf("    %c \t\t  %i\n", (char) index + 'a', letters[index]);
    }
}

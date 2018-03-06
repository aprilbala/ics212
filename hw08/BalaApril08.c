/**
* This program will randomly pick two numbers. Then to get the amount of rolls a
* six-sided dice will be rolled, this program will apply math functions to the two
* randomly generated numbers by finding the floored value of the square root of
* the sum of the numbers. However, the dice will only be rolled if that final value is
* an even number, otherwise the dice will not be rolled and the program will end.
* If the dice is rolled, a message to the user will print the outcome that was rolled.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 8
* @date       2018-02-08
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> /* For random number generator */
#include <time.h> /* For the time function. */
#define MAX 50

int main(void) {
    int side = 0;
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;
    int side4 = 0;
    int side5 = 0;
    int side6 = 0;

    int count = 0;
    int rolls = 0;
    int num1 = 0;
    int num2 = 0;
    int ifEven = 0;
    int total = 0;
    int average = 0;

    /* FUNCTION: srand() */
    srand(time(NULL));

    /* FUNCTION: rand() */
    /* FUNCTION: floor() */
    /* FUNCTION: sqrt() */
    num1 = 1 + rand() % MAX;
    num2 = 1 + rand() % MAX;
    rolls = floor(sqrt(num1 + num2));
    ifEven = rolls % 2;

    printf("Num1: %d\n", num1);
    printf("Num2: %d\n", num2);
    printf("Total times to roll dice: %d\n", rolls);
    printf("- - - - - - - - - - - - -\n");

    if (ifEven == 0) {
        /* If # of rolls turns out to be even, then dice is rolled. */
        printf("Yay! Number is even. %d dice rolls for you. :-)\n", rolls);

        for (count = 1; count <= rolls; count++) {

          /* Random number generator of 1-6, representing each side of the dice. */
          side = 1 + rand() % 6;
          //count each number
          switch (side) {
          case 1:
            side1++;
            break;
          case 2:
            side2++;
            break;
          case 3:
            side3++;
            break;
          case 4:
            side4++;
            break;
          case 5:
            side5++;
            break;
          case 6:
            side6++;
            break;
          }
        }

        /* Prints outcome of rolled dice. */
        printf("- - - - - - - - - - - - -\n");
        printf("Player One\n");
        printf("Side \tCount\n");
        printf("  1 \t  %d\n", side1);
        printf("  2 \t  %d\n", side2);
        printf("  3 \t  %d\n", side3);
        printf("  4 \t  %d\n", side4);
        printf("  5 \t  %d\n", side5);
        printf("  6 \t  %d\n", side6);
        printf("- - - - - - - - - - - - -\n");

    } else {
        /* If # of rolls is not even, then dice will not be rolled. */
        printf("Sorry! Number is odd. No rolls for you! :-(\n");
    }

    return 0;
}

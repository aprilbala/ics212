/**
* This program will perform five recursive functions on an interval of two numbers,
* of which is taken as input from the user. When prompted, the user will be asked
* to enter two positive integers, the first number smaller than the second number.
* From there, the numbers are checked to see that (1) the second number is greater
* than the first number; (2) both entered numbers are positive and non-zero; and (3)
* to check if the numbers are not the same. If the numbers pass these conditions, then
* the numbers will be put through the five recursive functions.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 10
* @date       2018-02-22
*/

#include <stdio.h>
#include "getdouble.h"

void recursiveCount(int, int);
int recursiveAdd(int, int);
int recursiveMultiply(int, int);
int recursivePower(int, int);
int recursiveGcd(int, int);

int main() {

    printf("Enter two positive integers, separated by a space, the first smaller than the second: ");
    int input1 = (int) getdouble();
    int input2 = (int) getdouble();

    /* Stores results from recursive math functions. */
    int recursiveAddResult = 0;
    int recursiveMultiplyResult = 0;
    int recursivePowerResult = 0;
    int recursiveGcdResult = 0;

    /* Checks to see if number inputs meet conditions. */
    if (input2 > input1) {

        /* If the number inputs meet the conditions, then the numbers will be put through
           the recursive functions, which each also have a printed result.  */
        recursiveCount(input1, input2);

        recursiveAddResult = recursiveAdd(input1, input2);
        printf("\nThe sum of %d to %d = %d\n", input1, input2, recursiveAddResult);

        recursiveMultiplyResult = recursiveMultiply(input1, input2);
        printf("The product of %d to %d = %d\n", input1, input2, recursiveMultiplyResult);

        recursivePowerResult = recursivePower(input1, input2);
        printf("%d to the power of %d = %d\n", input1, input2, recursivePowerResult);

        recursiveGcdResult = recursiveGcd(input1, input2);
        printf("The GCD of %d and %d = %d\n", input1, input2, recursiveGcdResult);

    } else {
        /* If the input does not meet the conditions, then a specific error is
           printed to the user. */
        if (input1 <= 0) {
            printf("ERROR: %d is not positive\n", input1);
        } else if (input2 <= 0) {
            printf("ERROR: %d is not positive\n", input2);
        } else if (input1 == input2) {
            printf("ERROR: You did not enter two different numbers\n");
        } else if (input2 < input1) {
            printf("ERROR: %d is not smaller than %d\n", input1, input2);
        }
    }
}

/* Function that will count from start to end. The first integer being the start of
   the count, the second integer being the end count. The consecutive integer interval
   prints as a result of this function. */
void recursiveCount(int start, int end) {
    printf("Counting from %d to %d: ", start, end);

    if (start == end) {     /* base case */
        printf("%i", start);
    } else {
        int i;
        for (i = start; i <= end; i++) {
            printf("%i ", i);
        }
    }
}

/* Function that recursively finds the sum of the interval of the inputted integers.
   This function returns that final sum. */
int recursiveAdd(int start, int end) {
    int result = 0;

    if (start == end) {     /* base case */
        result = end;
    } else {
        result = start + recursiveAdd(start + 1, end);
    }

    return result;
}

/* Function that recursively finds the product of the interval of the inputted integers.
   This is done by multiplying the first number (start), by its succeeding number,
   all until the second number (end). This function returns the product. */
int recursiveMultiply(int start, int end) {
    int result = 0;

    if (start == end) {     /* base case */
        result = end;
    } else {
        result = start * recursiveMultiply(start + 1, end);
    }

    return result;
}

/* Function that finds the result of the first number (the base) to the power
   of the second number (the exponent). This function returns the result
   of base^exponent (i.e. base = 2, exponent = 5 => function will return result
   of 2^5, which is 32). */
int recursivePower(int base, int exponent) {
    int result = 1;

    if (exponent == 0) {        /* base case */
        return result;
    } else {
        result = base*(recursivePower(base,exponent-1));  //call function again
    }

    return result;
}

/* Function that finds the greatest common divisor (gcd) of the two numbers. */
int recursiveGcd(int start, int end) {
    int result = 0;

    if (end % start == 0) {     /* base case */
       result = start;
    } else {
        result = recursiveGcd(end, start % end);
    }

    return result;
}

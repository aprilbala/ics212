/** This program uses pointers on a previously initialized array,
*   to print the contents of the array, print a specific element
*   in the array, and print the addresses of each element in
*   the array.
*   Additionally, this program uses the increaseIntViaPointer()
*   function to increase the value (+ 100) of a previously initialized
*   integer with the use of a pointer.
*
*   Note that this program does not ask for any user input.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 13
* @date       2018-03-06
*/

#include <stdio.h>
#define ARRAY_SIZE 5

void increaseIntViaPointer(int *); /* Function prototype */

int main() {
    int i = 0;  /* for for loop, uhunix/ssh doesn't like when initialized within for loop setup */

    /* Initializes array of five elements. Values in array maybe changed.
       However, number of elements must match ARRAY_SIZE. */
    int intArray[ARRAY_SIZE] = {159, 41, 65, 281, 12};
    int *intArrayPointer = intArray;

    /* Initializes integer variable that will be used for increaseIntViaPointer().
       Value initialized here may also be changed. */
    int intVariable = 20;

    /* The following lines are for outputting the 5th element in the array. */
    puts("\nPrinting the 5th element in the array: ");
    puts("- - - - - - - - - - - - - - - - - - - - - - - - -");
    /* Uses array subscript notation with array name to output element */
    printf("  intArray[4] = %i", intArray[4]);
    /* Uses pointer/offset notation with array name to output element */
    printf("\n  *(intArray + 4) = %i", *(intArray + 4));
    /* Uses array subscript notation with pointer to output element */
    printf("\n  intArrayPointer[4] = %i", intArrayPointer[4]);
    /* Uses pointer/offset notation with pointer to output element */
    printf("\n  *(intArrayPointer + 4) = %i", *(intArrayPointer + 4));
    printf("\n");
    printf("\n");

    /* The following outputs the contents of the array. */
    puts("Printing the contents of the array: ");
    puts("- - - - - - - - - - - - - - - - - - - - - - - - -");
    /* The for loops in this part of the program allows for elements to print
       from first element to last element in array without having to use printf
       for each individual element. Useful, for arrays with many elements. */

    /* Uses array subscript notation with array name to output elements in array */
    puts("  Using array subscript notation with array name...");
    printf("\t");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%i ", intArray[i]);
    }

    /* Uses pointer/offset notation with array name to output elements in array */
    puts("\n  Using pointer/offset notation with array name...");
    printf("\t");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%i ", *(intArray + i));
    }

    /* Uses array subscript notation with pointer to output elements in array */
    puts("\n  Using array subscript notation with pointer...");
    printf("\t");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%i ", intArrayPointer[i]);
    }

    /* Uses pointer/offset notation with pointer to output elements in array */
    puts("\n  Using pointer/offset notation with pointer...");
    printf("\t");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%i ", *(intArrayPointer + i));
    }
    printf("\n");
    printf("\n");

    /* The following uses array subscript notation with array name to print addresses
       of each element in array. */
    puts("Printing the addresses of each element in the array: ");
    puts("- - - - - - - - - - - - - - - - - - - - - - - - -");
    /* The for loops in this part of the program allows for elements to print
       from first element to last element in array without having to use printf
       for each individual element. Useful, for arrays with many elements. */
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("  &intArray[%i] = %p\n", i, intArrayPointer + i);
    }
    printf("\n");

    puts("Integer variable BEFORE function call...");
    /* Outputs value of intVariable BEFORE increaseIntViaPointer() function call */
    printf("  intVariable = %i\n", intVariable);

    /* Passes address of intVariable, to be used for increaseIntViaPointer() */
    increaseIntViaPointer(&intVariable);

    puts("Integer variable AFTER function call...");
    /* Outputs final value of intVariable AFTER increaseIntViaPointer() function call */
    printf("  intVariable = %i\n", intVariable);
    printf("\n");

    return 0;
}

/* Increase the value of an integer that the pointer is pointed to. */
void increaseIntViaPointer(int *intParam) {
    /* Message that outputs to the user explaining what is going on. */
    puts("Inside increaseIntViaPointer() function, increasing parameter by 100...");

    /* Increase variable by +100 using dereferencing. */
    *intParam = *intParam + 100;

    /* Outputs new integer value. */
    printf("  *intParam = %i\n", *intParam);
}

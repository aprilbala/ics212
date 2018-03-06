/**
* This program uses pointers to modify the values that are stored at previously
* initizialied variables.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 12
* @date       2018-03-01
*/

#include <stdio.h>

int main() {

    /* Declares and initizialies variables. Values here can be changed. */
    char charVar = 'a';
    int intVar = 15;
    double doubleVar = 10.10;

    /* Declares and initizialies a pointer for each variable, that points
       to the address of the variable. */
    char *charVarPointer = &charVar;
    int *intVarPointer = &intVar;
    double *doubleVarPointer = &doubleVar;

    /* Outputs variables and their initial values that were initizialied
      to them. */
    puts("Variable values:");
    printf("charVar = %c\n", charVar);
    printf("intVar = %i\n", intVar);
    printf("doubleVar = %f\n\n", doubleVar);

    /* Outputs pointer names and the addresses at which the value of each
       variable is stored. */
    puts("Pointer names and addresses stored:");
    printf("charVarPointer = %p\n", charVarPointer);
    printf("intVarPointer = %p\n", intVarPointer);
    printf("doubleVarPointer = %p\n\n", doubleVarPointer);

    /* Uses dereferencing to output the values at each pointer. */
    puts("Pointer names and values using dereferencing:");
    printf("dereferenced charVarPointer = %c\n", *charVarPointer);
    printf("dereferenced intVarPointer = %i\n", *intVarPointer);
    printf("dereferenced doubleVarPointer = %f\n\n", *doubleVarPointer);

    /* Modifies the value at each pointer by adding 4. */
    *charVarPointer = *charVarPointer + 4;
    *intVarPointer = *intVarPointer + 4;
    *doubleVarPointer = *doubleVarPointer + 4;

    /* Outputs the new values at each pointer, that occured as a result
       of the above modifications. */
    puts("Pointer names and values using dereferencing after + 4:");
    printf("dereferenced charVarPointer = %c\n", *charVarPointer);
    printf("dereferenced intVarPointer = %i\n", *intVarPointer);
    printf("dereferenced doubleVarPointer = %f\n\n", *doubleVarPointer);

    /* Outputs variables names, and new values that resulted from
       the +4 modification. */
    puts("Variable values:");
    printf("charVar = %c\n", charVar);
    printf("intVar = %i\n", intVar);
    printf("doubleVar = %f\n\n", doubleVar);

    return 0;
}

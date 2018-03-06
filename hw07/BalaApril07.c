/**
* This program will count from 1 to 999 in Spanish.
*
* @author     Bala, April-Angela
* @assignment ICS 212 Assignment 7
* @date       2018-02-06
*/

#include <stdio.h>

int main(void) {

    /* Explains to user what program will do. */
    printf("This program will count from 1 to 999 in Spanish.\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - -\n");

    /* Initializes variables. number - used for list of numbers.*/
    int number = 0;

    /* this for loop counts from 1 to 999, and will print numbers 1-999. */
    for (number = 1; number <= 999; number++) {
        printf("%i = ", number);

        /* Used to look at separate digit places in number. */
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int ones = (number / 1) % 10;

        /* The following conditions are done if the numbers is >= 16. */
        if (number >= 16) {

            /* For the hundreds-digit place. If the condition is met, its
               respective number in spanish will print. */
            if (hundreds == 1) {
                printf("ciento ");
            } else if (hundreds == 2) {
                printf("doscientos ");
            } else if (hundreds == 3) {
                printf("trescientos ");
            } else if (hundreds == 4) {
                printf("cuatrocientos ");
            } else if (hundreds == 5) {
                printf("quinientos ");
            } else if (hundreds == 6) {
                printf("seiscientos ");
            } else if (hundreds == 7) {
                printf("setecientos ");
            } else if (hundreds == 8) {
                printf("ochocientos ");
            } else if (hundreds == 9) {
                printf("novecientos ");
            }

            /* For the tens-digit place. If the condition is met, its
               respective number in spanish will print. */
            if (tens == 1) {
                printf("diez ");
            } else if (tens == 2) {
                printf("veinte ");
            } else if (tens == 3) {
                printf("treinta ");
            } else if (tens == 4) {
                printf("cuarenta ");
            } else if (tens == 5) {
                printf("cincuenta ");
            } else if (tens == 6) {
                printf("sesenta ");
            } else if (tens == 7) {
                printf("setenta ");
            } else if (tens == 8) {
                printf("ochenta ");
            } else if (tens == 9) {
                printf("noventa ");
            }

            /* For the ones-digit place. If the condition is met, its
               respective number in spanish will print. */
            if (ones == 1) {
                printf("y uno");
            } else if (ones == 2) {
                printf("y dos");
            } else if (ones == 3) {
                printf("y tres");
            } else if (ones == 4) {
                printf("y cuatro");
            } else if (ones == 5) {
                printf("y cinco");
            } else if (ones == 6) {
                printf("y seis");
            } else if (ones == 7) {
                printf("y siete");
            } else if (ones == 8) {
                printf("y ocho");
            } else if (ones == 9) {
                printf("y nueve");
            }

        /* The following conditions are for special cases when counting in spanish.
           Example: Spanish numbers 11-15 have special names.
                    Numbers 1-9 don't need the "y"
        */
        } else if (number == 1) {
            printf("uno");
        } else if (number == 2) {
            printf("dos");
        } else if (number == 3) {
            printf("tres");
        } else if (number == 4) {
            printf("cuatro");
        } else if (number == 5) {
            printf("cinco");
        } else if (number == 6) {
            printf("seis");
        } else if (number == 7) {
            printf("siete");
        } else if (number == 8) {
            printf("ocho");
        } else if (number == 9) {
            printf("nueve");
        } else if (number == 10) {
            printf("diez");
        } else if (number == 11) {
            printf("once");
        } else if (number == 12) {
            printf("doce");
        } else if (number == 13) {
            printf("trece");
        } else if (number == 14) {
            printf("catorce");
        } else if (number == 15) {
            printf("quince");
        }

        printf("\n");
    }
}

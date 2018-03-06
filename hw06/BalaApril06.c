/**
 * This programs asks for a user input of an integer between 0 and 9,
 * and will give that number in Spanish to the user.
 *
 * @author     Bala, April-Angela
 * @assignment ICS 212 Assignment 6
 * @date       2018-02-01
 */

#include <stdio.h>

int main(void) {

    /* Initializes variable, used to store user input. */
    char input = '0';

    /* Explains to user what program will do. */
    printf("This program will ask you for a number, and will then give it to you in Spanish.");
    printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

    /* Asks user to enter an integer between 0-9. */
    printf("\nEnter an integer between 0-9: ");
    input = getchar();

    /* This if statment filters the user's input, where it accepts integer values 0-9 only.
       If a letter or a value not between 0 and 9 is inputted, the program will state that
       the input the user has given is not a valid input for the program, and thus will exit. */
    if (((input >= '0') && (input <= '9'))  && getchar() == '\n') {

        /* If user input meets previous condition of being an integer input between 0 and 9,
           then the respective Spanish number will print to the user. */
        if (input == '1') {
            puts("uno");
        } else if (input == '2') {
            puts("dos");
        } else if (input == '3') {
            puts("tres");
        } else if (input == '4') {
            puts("cuatro");
        } else if (input == '5') {
            puts("cinco");
        } else if (input == '6') {
            puts("seis");
        } else if (input == '7') {
            puts("siete");
        } else if (input == '8') {
            puts("ocho");
        } else if (input == '9') {
            puts("nueve");
        } else {
            puts("cero");
        }

    } else {
        printf("The value you entered is not a vaild input.\n");
    }

    return 0;
}


/* Sample output (valid):
    This program will ask you for a number, and will then give it to you in Spanish.
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    Enter a number 0-9: 2
    dos
*/

/* Sample output (invalid):
    This program will ask you for a number, and will then give it to you in Spanish.
    - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    Enter a number 0-9: 212
    You did not enter a number in the specified range.
*/

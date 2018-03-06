/**
 *  This program uses input stream to get inputs of characters
 *  and numbers from the user. When a user inputs said character (letter)
 *  or number (double), a prompt will be displayed saying what character
 *  or number the user has just entered.
 *
 *  @author	 Bala, April-Angela
 *  @assignment  ICS 212 Assignment 04
 *  @date	 2018-01-25
 */

#include <stdio.h>
#include "getdouble.h"

int main(void) {

  /* Creates variables, which will be used to store user input. */
  char letter = 'A';
  double number = 0.0;

  /*
    The following part of the program is used to take in user
    input of characters. 
  */

  /* Asks user for input of character, getchar() gets the inputted character. */
  printf("Please enter a letter: ");
  letter = getchar();  
  /* 
    Displays inputted character to the user, %c used to specify that the
    input to be outputted back to the user is in ASCII character format.
  */
  printf("The letter that you entered is: '%c'", letter); 
  /* Used to clear input stream, allowing user to enter another letter. */
  getchar();

  /* 
    Again, asks user for character input, then prompt is shown 
    to say what user has entered.
   
    getchar() used again to clear input stream, allowing for user
    to next inputs. 
  */
  printf("\nPlease enter another letter: ");
  letter = getchar();  
  printf("The new you letter that you entered is: '%c'", letter);
  getchar();  

  /*
    The following part of the program is used to take
    in number input from the user.
  */
  
  /*
    Asks user for first number input, the number is got using 
    getdouble(), and then is displayed to the user.
    
    %f is used to specify that the number entered from the user, 
    will now be displayed and formatted to its respective float value. 
  */
  printf("\nPlease enter a number: ");
  number = getdouble();
  printf("The number you entered is: %f", number);

  /*
    Asks user for second number input, using same process as 
    first number input procedure.
  */
  printf("\nPlease enter another number: ");
  number = getdouble();
  printf("The new number that you entered is: %f\n", number);

  return 0;
}

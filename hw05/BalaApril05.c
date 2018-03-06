/**
 *  This programs asks the user for their birthdate, and thus
 *  will proceed to calculate their age in days.
 *
 *  @author     Bala, April-Angela
 *  @assignment ICS 212 Assignment 05
 *  @date       2018-01-30
 */

#include <stdio.h>
#include "getdouble.h"
#define PRESENTMONTH 1  /* May change to current month. */
#define PRESENTDAY 30   /* May change to current day. */
#define PRESENTYEAR 2018  /* May change to current year. */

int main(void) {

  /** Creates variables:
   *    birthMonth, birthDay, birthYear - used to store user input.
   *    numDaysInYear1, numDaysInYear1ForBirthdate - used for age in days calcuation.
   *    age - used for age in days.
   */
  int birthMonth = 0;
  int birthDay = 0;
  int birthYear = 0;
  int numDaysInYear1 = 0;
  int numDaysInYear1ForBirthdate = 0;
  int age = 0;

  puts("Hello! This program will calculate your age in days.");
  printf("- - - - - - - - - - - - - - - - - - - - - - - - - -");

  /* Asks user for their birth month. */
  printf("\nPlease enter the month you were born (1-12): ");
  birthMonth = getdouble();

  /* Asks user for day they were born. */
  printf("Please enter the day you were born: ");
  birthDay = getdouble();

  /* Asks user for their birth year. */
  printf("Please enter your birth year: ");
  birthYear = getdouble();

  /** Prints to user: today's date.
   *  Values for these variables can be changed in the symbolic constant.
   */
  printf("Today's date is: %d/%d/%d", PRESENTMONTH, PRESENTDAY, PRESENTYEAR);

  /* Reads to user their birthday, based on their previous input. */
  printf("\nBased on your input, your birthday is: %d/%d/%d\n", birthMonth, birthDay, birthYear);

  /* Using user's inputted information and the current date, calculations for age in days is computed. */
  numDaysInYear1 = (PRESENTYEAR * 365.25) + ((PRESENTMONTH - 1) * 365.25/12.0) + (PRESENTDAY);
  numDaysInYear1ForBirthdate = (birthYear * 365.25) + ((birthMonth - 1) * 365.25/12.0) + (birthDay);
  age = numDaysInYear1 - numDaysInYear1ForBirthdate;

  /* User's age in days is shown to user. */
  printf("Your age in days is: %i\n", age);

  return 0;
}

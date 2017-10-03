/*
 * Brett Waugh
 * 16 January 2017
 * COP3514 Project 1
 * Program obtains a number from the User. Then 
 * checks to maks sure it is within the bounds.
 * If the number is within the bounds then it performs
 * calculations on the number and displays output.
*/

#include <stdio.h> 

int main(void)
{
/* Declarations */
int og_number, first_dig, second_dig, third_dig;

/* Input */
printf("Enter a three-digit number: ");
scanf("%d", &og_number);

/* Calculates each number */

first_dig = og_number / 100;
second_dig = (og_number - (first_dig * 100)) / 10;
third_dig = (og_number - (first_dig * 100)) - (second_dig * 10);

/* Filter */
if (og_number < 100 || og_number > 999)
	{
	printf("Invalid input, the number must be between 100 and 999");
	}
else	
	{
	first_dig = (first_dig + 6) % 10;
	second_dig = (second_dig + 6) % 10;
	third_dig = (third_dig + 6) % 10;
	printf("Output: %d%d%d", first_dig, second_dig, third_dig);
	}
return 0;
}

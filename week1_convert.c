/*
 * Brett Waugh
 * 16 January 2017
 * COP3514 Project 1
 * Gives the User a choice menu for
 * converting between different metrics.
 */

#include <stdio.h>

#define M_K 1.6093f
#define K_M 0.6214f
#define I_C 2.54f
#define C_I 0.3937f

int main(void)
{
/* Declarations */
float units;

int choice;

/* Menu */
printf("Please select one of thr following operations\n1 - Miles to Kilometers\n2 - Kilometers to Miles\n3 - Inches to Centimeters\n4 - Centimeters to Inches");
scanf("%d", &choice);

/* Switch statement */
switch (choice) 
{
case 1: printf("Number of miles: ");
	scanf("%f", &units);
	units = units * M_K;
	printf("Number of kilometers: %.2f", units); 
	break;
case 2: printf("Number of kilometers: ");
	scanf("%f", &units);
	units = units * K_M;
	printf("Number of miles: %.2f", units);
	break;
case 3: printf("Number of inches: ");
	scanf("%f", &units);
	units = units * I_C;
	printf("Number of centimeters: %.2f", units);
	break;
case 4: printf("Number of centimeters: ");
	scanf("%f", &units);
	units = units * C_I;
	printf("Number of inches: %.2f", units);
	break;
default: printf("Invalid input, please select between 1 and 4");
	return 0;
}
return 0;
}



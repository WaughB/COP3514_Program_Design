/*
 * Brett Waugh
 * 26 January2017
 * The program takes a message from the User,
 * removes all the punctuation, then prints 
 * the message in caps.
 */
#include<stdio.h>

int main(void)
{

/* Declarations */

char ch;

/* Intro Message */

printf("Enter a message: ");

/* Filter - Gets individual character then capitalizes it. */

while ((ch = getchar()) != '\n')
	{
	if ('a' <= ch && ch <= 'z')
		{
		ch = ch - 'a' + 'A';
		}
	if ('A' <= ch && ch <= 'Z')
		{
		printf("%c",ch);
		}
	else
		{
		printf(" ");
		}
	}

printf("\n");

return 0;
}


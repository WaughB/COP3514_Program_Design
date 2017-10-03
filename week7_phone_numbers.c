/****************************************************
* Brett Waugh
* 26 March 2017
* The program translate seven-letter words in a file 
* to their corresponding phone numbers. 
******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void translate(char *word, char *phone_Number)
{
    int i,result;
    for(i=0; word[i]!='\0'; i++)
    {
        char letter=word[i];
        /* If letters are between certain letters, give it that number */
        if ('A' <= letter && letter <= 'C')
        result=50; /* 2 */
        if ('D' <= letter && letter <= 'F')
        result=51; /* 3 */
        if ('G' <= letter && letter <= 'I')
        result=52; /* 4 */
        if ('J' <= letter && letter <= 'L')
        result=53; /* 5 */
        if ('M' <= letter && letter <= 'O')
        result=54; /* 6 */
        if ('P' <= letter && letter <= 'S')
        result=55; /* 7 */
        if ('T' <= letter && letter <= 'V')
        result=56; /* 8 */
        if ('W' <= letter && letter <= 'Y')
        result=57; /* 9 */
        /* Adds result to the phone number */
        phone_Number[i]=result;
    }
    /* Assigns the null character at the end */
    phone_Number[i]='\0';
}

int main(void)
{
    FILE *fPtr1,*fPtr2;
    char word[8];
    char nameOfInput[100];
    char nameOfOutput[100+4]; /* Because file extension */
    char phone_Number[8];
    printf("Enter the file name: ");
    scanf("%s",nameOfInput);
	strcpy(nameOfOutput, nameOfInput);
	strcat(nameOfOutput, ".cvt");
	printf("Output file name: %s", nameOfOutput);
    /* Input file for reading */
    fPtr1 = fopen(nameOfInput, "r");
    /* Output file for writing */
    fPtr2 = fopen(nameOfOutput, "w");
    if (fPtr1 == NULL)
	{
	printf("FILE COULD NOT BE FOUND\n");
	}
    else
    {
        while (!feof(fPtr1))
        {
            fscanf(fPtr1, "%s",word);
            translate(word,phone_Number);
            fprintf(fPtr2,"%s\n",phone_Number);
        }
    }
    /* closing Input */
    fclose(fPtr1);
    /* closing Output */
    fclose(fPtr2);
	
    return 0;
}

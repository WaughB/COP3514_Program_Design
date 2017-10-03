/*****************************************************************
 * Brett Waugh 
 * 18 February 2017
 * This program finds the edges of light and dark regions of the
 * input binary bit pattern.
 * ***************************************************************/

#include <stdio.h>

void edge(int n, int *a1, int *a2); // Function declaration. 

int main(void)
{
	int input[8]={0};
	int output[8];

	int i;
	printf("Please enter the 8 bit bar code: ");
	for(i=0;i<8;i++)
		scanf("%1d", &input[i]);

	edge(8, input, output);

	for(i=0;i<8;i++)
		printf("%d", output[i]);
	printf("\n");
	return 0;
}

void edge(int n, int *a1, int *a2)
{


	int i;
	*a2=0; // Declares the first element equal to zero.
	for (i = 1;i<n; i++)
		if(*(a1+i)==*(a1+i-1)) // Compares the element at the i value to the element at the i-1 value.
			*(a2+i)=0; // If they are equal a zero is placed at that index.
		else
			*(a2+i)=1; // If they are not equal a one is placed at that index.
}

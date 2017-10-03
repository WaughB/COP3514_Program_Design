/******************************************************
*	Brett Waugh
*	20 February 2017
*	The program takes a User inputted number,
*	then adds six to each numbers and takes mod ten,
*	then swaps the first and last digits.
********************************************************/
#include<stdio.h>

void replace(int *a, int *b, int n);

void swap(int *p, int *q);

int main()
{
     // Declaration.

     int n, i = 0;
     int a[10], b[10];

     // Input

     printf("Enter the number of digits of the number: ");
     scanf("%d", &n);

     printf("Enter the number: ");
     for (i=0;i<n;i++)
          scanf("%1d", &a[i]);

     // Call the replace function.

     replace(a, b, n);

     // Output

     for (i=0;i<n;i++)
          printf("%d", b[i]);

     return 0;
}

void replace(int *a, int *b, int n)
{

     // Declaration
     int i;

     // For loop to replace each digit of number

     for (i=0;i<n;i++)
     {
          *(b+i)=(*(a+i)+6)%10;
     }

     printf("Output: ");

     // Call the swap function. 

     swap(b,(b+(n-1)));
}

void swap(int *p, int *q)

{

     // Declaration

     int t;

     // Swaps the digits.

     t= *p;

     *p= *q;

     *q=t;

}

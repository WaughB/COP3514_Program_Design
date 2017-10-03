/****************************
* Brett Waugh
* 1 April 2017
* The program reads sale.txt
* and creates a sorted list. 
*****************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_LEN 1000

struct product
{
    char product_name[20];
    double unitprice, sold, volume;
};

struct product products[MAX_LEN];

void selection_sort(struct product products[], int n)
{
     /* Declarations */
	 
    int i,z, big = 0;
    double tmp;
    char tmp1[20];
	z =n-1;
	 
    if (n == 1) return;

    for(i=1; i<n;i++)
		if(products[i].volume > products[big].volume) big= i;
	  
    if(big<z)
     {
        tmp= products[z].volume;
        products[z].volume= products[big].volume;
        products[big].volume= tmp;
		
        tmp= products[z].unitprice;
        products[z].unitprice= products[big].unitprice;
        products[big].unitprice= tmp;

        tmp= products[z].sold;
        products[z].sold= products[big].sold;
        products[big].sold= tmp;

        strcpy(tmp1, products[z].product_name);
        strcpy(products[z].product_name, products[big].product_name);
        strcpy(products[big].product_name, tmp1);
     }
    selection_sort(products, z);
}

int main(void)
{
	/* Declarations */
	
    FILE *filptr, *filp;
    char name[20];
    double price, total;
    int i = 0;    
	int j;

    if ((filptr=fopen("sale.txt", "r")) == NULL)
    {
        printf("ERROR OPENING FILE"); /* Error messgage for opening file */
        return 0;
    }

    filp=fopen("sorted_products.txt", "w");

    if (filp == NULL)
    {
        printf("ERROR COULD NOT WRITE TO FILE"); /* Error message for writing */
        exit(0);
    }

    while (fscanf(filptr, "%s %lf %lf", name, &price, &total) == 3)
    {
        strcpy(products[i].product_name, name);

        products[i].unitprice = price;

        products[i].sold = total;

        products[i].volume = total*price;

        i++;
     }

    selection_sort(products, i);

    fprintf(filp, "Name\t\t Unit Price\t\t Sold\t\t Volume\n");

    for (j=0; j<i;++j)
    {
        fprintf(filp, "%s\t\t %lf\t\t %lf\t\t %lf\n", products[j].product_name, products[j].unitprice, products[j].sold, products[j].volume);
    }
	 
    fclose(filptr);
    fclose(filp);

    return 0;
}
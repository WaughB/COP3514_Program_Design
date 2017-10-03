/***************************************
* Brett Waugh
* 26 February 2017
* The program identifies the largest
* and smallest numbers in a given set.
****************************************/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main(int argc, char *argv[]) // Stores the numbers in argv.
{
	// Declarations.
    int i,temp=0,big=0,small=0;

	// Input.
        if (!(strcmp(argv[1],"-l"))) // For case, -l.
        {  
            big = atoi(argv[2]);
            for (i=2;i<argc;i++)
            {
                temp = atoi(argv[i]);
                if (big<temp)
                    big = temp;
            }
            printf("\n output: %d\n",big);
        }
        else
        {
            if (!(strcmp(argv[1],"-s"))) // For case, -s.
            {  
                small = atoi(argv[2]);
                for (i=2;i<argc;i++)
                {
                    temp = atoi(argv[i]);
                    if (small>temp)
                        small = temp;
                }
                printf("\n output: %d\n",small);
            }
        }
    }
	
    return 0;
}
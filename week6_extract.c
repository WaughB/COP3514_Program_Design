/*************************************************************
* Brett Waugh
* 26 February 2017
* The program gets extracts strings that start with www. and 
* end with .edu. 
**************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int read_line(char*,int);
void extract(char *s1, char *s2);
char str[100];
char web[100],str1[30];
char *strp1;
char *strp2;
int main()
{
	 // Declarations
	 int n=1000;
	 
     int i,m=0,j=0,k=0;
	 
     strp1=&str[0];
	 
     int count=0;

     int wcheck=FALSE;

     int echeck=FALSE;
	 
	 // Input Message and read_line call. 
	 printf("Enter the URL: ");
     count=read_line(strp1,n);

	 // Requirement Check. 
     for(i=0;i<count;i++) // If the www. requirement is met. 
     {        
          if(str[i]=='w')
              if(str[i+1]=='w')
                   if(str[i+2]=='w')
                        if(str[i+3]=='.')
                        {
                                  wcheck=TRUE;
								  
                                  k=i;
								  
                                  break;
                        }
     }
     for(i=k;i<count;i++)
          web[j++]=str[i];

     if(wcheck==TRUE) // If the .edu requirement is met. 
     {
          for(i=count;i>0;i--)
          {
          if(web[i]=='u')
              if(web[i-1]=='d')
                   if(web[i-2]=='e')
                        if(web[i-3]=='.')
                        {
                             echeck=TRUE;

                             m=i;

                             break;
                        }
          }
          j=0;
     }
     if(wcheck==TRUE && echeck==TRUE)  // If both requirements met.
     {
          for(i=0;i<=m;i++)
          {
              str1[j++]=web[i];
          }
          str1[j]='\0';

          strp2=&str1[0];

          extract(strp1,strp2);
     }
     else // Error message.
	 printf("Web address starting with www. and ending with .edu not found ");

     return 0;

}

int read_line(char*strp1,int n)
{
     char ch;

     int i=0;

     while((ch=getchar())!='\n')
     {
          if(i<n)
          {
              *strp1=ch;

              i++;

              strp1++;
          }
     }
     *strp1='\0';

     return i;
}

void extract(char *s1, char *s2)
{
     printf("\nInput :");

     while(*s1!='\0')
     {
     printf("%c",*s1);

     s1++;
     }

     printf("\nOutput :");

     while(*s2!='\0')
     {
          printf("%c",*s2);

          s2++;
     }

}
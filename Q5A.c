/* write a c program to input 5 int for user print no. in reverse order */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10],temp;
    int i;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
        
    }
   for(i=0;i<5/2;i++)
   {
    temp=n[i];
    n[i]=n[5-i-1];
    n[5-i-1]=temp;

   }
   for(i=0;i<5;i++)
   {
        printf("reverse =%d\n",n[i]);
   }
   return 0 ; 
} 

         
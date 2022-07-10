/* Write a c program bubble short*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10];
    int i, sum=0,j,t;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
        
    }
   printf("sorted lists ");
   for(i=0;i<5;i++)
   {
    for(j=0;j<5-i-1;j++)
    {
        if(n[j]>n[j+1])
        {
            t=n[i];
            n[j]=n[j+1];
            n[j+1]=t;

        }
    
        
    }
   }
   for(i=0;i<5;i++)
   printf("bubble short = %d",n[i]);
   return 0;

}
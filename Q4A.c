/* Write a c program to input  5 integer no. . calculate the sum of all even no. from the least */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10];
    int i, sum=0;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
        
    }
    for (i=0;i<5;i++)
    {
        if (n[i]%2==0)
        sum=sum+n[i];
    }
        
   printf("sum = %d ",sum );
   return 0 ; 
}
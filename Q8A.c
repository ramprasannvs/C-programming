/* Write a c program 5 integer no. from user and calculate the sum of square */
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
        sum= sum+(n[i]*n[i]);
    }
   printf("sum = %d ",sum );
   return 0 ; 
}
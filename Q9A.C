/* Write a c program 5 integer no. from user and print there sum */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10][10];
    int i, sum=0,j;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
        scanf("%d",&n[i][j]);
        sum= sum+n[i][j];
    }
    }
   printf("sum = %d ",sum );
   return 0 ; 
}
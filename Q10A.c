/* Write a c program to input 3*3 matrix and calculate the sum odf diagonals*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[3][3];
    int i, sum=0,j;
    printf("enter the 5 no.");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&n[i][j]);
    
    }
    }
     for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            sum=sum+n[i][j];
        }
    }
    
   printf("sum = %d ",sum );
   return 0 ; 
}
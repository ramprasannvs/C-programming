/* Write a c program to input 3*3 matrix and print transpose of matrix */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[3][3];
    int i, j;
    printf("enter the 5 no.");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&n[i][j]);
    
    }
    }
    printf("transpose of matrix");
     for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
    
            printf("transpose =%d\t",n[j][i]);
        }
    
   printf("\n" );
    }
   return 0 ; 
}
/* Write a c program  to input marks of 5 subject opf a stuent . calculate the average marks */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10];
    int i, sum=0;
    float average;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
        sum= sum+n[i];
    }
   printf("sum = %d\n ",sum );
   average=sum/5.0;
   printf("average=%f",average);

   return 0 ; 
}
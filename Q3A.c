/* Write a c program  to input 5 integer no. find out the mximum and minimum no. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    int n[10];
    int i, max=0,min =0;
    printf("enter the 5 no.");
    for (i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    
    }
    min = n[i];for(i=0;i<5;i++)
   {
    if(max<n[i])
    max=n[i];
    if (min>n[i])
    min=n[i];
    
   }
    printf("max = %d\n min = %d ",max,min);

   return 0 ; 
}
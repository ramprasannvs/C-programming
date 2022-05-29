#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("current address =%u",p);
        p++;
    printf("new  address= %u",p);


}
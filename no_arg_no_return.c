#include<stdio.h>

void fun(void);

void main()
{
    fun();
    
}

void fun()
{
    int a=5,b=6,sum;
    sum=a+b;
    printf("sum=%d",sum);
}
#include<stdio.h>

int sum(void);

void main()
{
    int s;
    s=sum();
    printf("s=%d",s);
    
}

int sum()
{
    int a=5,b=6,sum=0;
    sum=a+b;
    return sum;
}
#include<stdio.h>
 
void vis(int,int);

void main()
{
    int a=8,b=6;
    vis(a,b);
    printf("inside fun(calling function)\n");
    printf("a=%d b=%d\n",a,b);
}

void vis(int a,int b)
{
    a=6;
    b=8;
    printf("inside fun(called function)\n");
    printf("a=%d b=%d\n",a,b);
}
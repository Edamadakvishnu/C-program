#include<stdio.h>

char fun();

void main()
{
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}

char fun()
{
    char c;
    scanf("%c",&c);
    printf("enter a character");
    return c;
}
  
#include <stdio.h>
void checkEvenOdd(int num);

int main() 
{
    int number = 7;
    checkEvenOdd(number);
    return 0;
}
void checkEvenOdd(int num) 
{
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}

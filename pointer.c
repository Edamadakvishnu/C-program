#include <stdio.h>

int main() 
{
    int n=10;        
    int *ptr=&n;     
    printf("Value of num: %d\n",n);
    printf("Address of num: %p\n",&n);
    printf("Value at ptr: %d\n",*ptr);
    *ptr = 20;
    printf("New value of num: %d\n",n);
    return 0;
}

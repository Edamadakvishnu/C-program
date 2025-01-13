#include <stdio.h>

int main() 
{
    int i = 1; 

    do {
        printf("Value: %d\n", i); 
        i++; 
    } while (i <=5);

    printf("Loop terminated.\n");
    return 0;
}


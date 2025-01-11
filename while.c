#include <stdio.h>
int main() {
    int n = 5, sum = 0, i = 1;
    while (i <= n) 
    {
        sum += i;  
        i++;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}

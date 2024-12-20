#include <stdio.h>
int main() 
{
    int n, real, reverse = 0;
    printf("Please enter a number to check if it is a palindrome: ");
    scanf("%d", &n);
    real= n;  
    while (n!=0) 
    {
        int digit = n % 10;         
        reverse = reverse*10+digit; 
        n/= 10;                    
    }    
    if (real== reverse) 
    {
        printf("The number %d is a palindrome.\n",real);
    } 
    else 
    {
        printf("The number %d is not a palindrome.\n",real);
    }
    return 0;
}

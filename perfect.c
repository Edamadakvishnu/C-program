#include <stdio.h>
int isPerfectNumber(int n) 
{
    int sum=0; 
    for (int i=1;i<=n/2;i++) 
    {
        if (n%i==0) 
        {
            sum+=i; 
        }
    }  
    return sum==n;
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (isPerfectNumber(number)) 
    {
        printf("%d is a perfect number\n",number);
    } 
    else 
    {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}

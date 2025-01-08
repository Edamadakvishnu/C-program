#include <stdio.h>
int sumOfSquares(int num) 
{
    int sum = 0, digit;
    while (num > 0) {
        digit = num % 10;      
        sum += digit * digit; 
        num /= 10;            
    }
    return sum;
}

int isHappyNumber(int num) 
{
    int slow, fast;
    slow = fast = num;
    do {
        slow = sumOfSquares(slow);         
        fast = sumOfSquares(sumOfSquares(fast)); 
    } while (slow != fast);

    return (slow == 1); 
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (isHappyNumber(num)) {
        printf("%d is a Happy Number.\n", num);
    } else {
        printf("%d is not a Happy Number.\n", num);
    }
    return 0;
}

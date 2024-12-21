#include <stdio.h>
#include <math.h>
int isPerfectSquare(int num) {
    if (num < 0) return 0; 

    int sqrtValue = (int)sqrt(num); 
    return (sqrtValue * sqrtValue == num); 
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPerfectSquare(number)) {
        printf("%d is a perfect square.\n", number);
    } else {
        printf("%d is not a perfect square.\n", number);
    }

    return 0;
}

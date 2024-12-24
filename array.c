#include <stdio.h>

int main() 
{
    int n, i;
    int numbers[100];
    float sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) 
    {
    sum += numbers[i];
    average = sum / n;
    printf("Sum of the array elements: %.2f\n", sum);
    printf("Average of the array elements: %.2f\n", average);
    return 0;
    }
}

#include <stdio.h>
void swap(int *a, int *b, int step) {
    if (step == 0) {
        return;
    }
    int temp = *a;
    *a = *b;
    *b = temp;
    swap(a, b, step - 1); 
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y, 1);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {3,2,2,3,4,5,3};
    int key = 3;
    int n = 7;
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != key) {
            arr[count++] = arr[i];
        }
    
    }
    printf("Modified array: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\nCount: %d\n", count);

    return 0;
}

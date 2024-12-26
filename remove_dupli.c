#include <stdio.h>
int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = 8;
    int j = 0; 
    for (int i=0;i<n;i++) {
        if (i==0||arr[i]!=arr[j-1]) {
            arr[j++]=arr[i];
        }
    }
    printf("Array after removing duplicates: ");
    for (int i=0;i<j;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}

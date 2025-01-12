#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("Value: %d\n", i);
    }
    printf("Loop terminated due to break.\n");
    return 0;
}

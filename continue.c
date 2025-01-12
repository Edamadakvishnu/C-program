#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; 
        }
        printf("Value: %d\n", i);
    }
    printf("Loop completed with continue.\n");
    return 0;
}

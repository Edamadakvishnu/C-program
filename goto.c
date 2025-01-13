#include <stdio.h>
int main() {
    int number;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        goto error; 
    }

    printf("You entered a positive number: %d\n", number);
    goto end; 

error:
    printf("Error: You entered a negative number.\n");

end:
    printf("Program terminated.\n");
    return 0;
}

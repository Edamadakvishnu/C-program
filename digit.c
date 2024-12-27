#include <stdio.h>
#include <ctype.h>
int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isdigit(ch)) 
    {
        printf("The character '%c' is a number.\n", ch);
    }
    else 
    {
        printf("The character '%c' is not a number.\n", ch);
    }
    return 0;
}

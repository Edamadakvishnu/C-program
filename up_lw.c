#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isupper(ch)) 
    {
        printf("The character '%c' is uppercase.\n", ch);
    } else if (islower(ch)) 
    {
        printf("The character '%c' is lowercase.\n", ch);
    } else 
    {
        printf("The character '%c' is not a letter.\n", ch);
    }
    return 0;
}

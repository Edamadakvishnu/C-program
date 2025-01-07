#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);
    for (int i=0;i<length;i++) 
    {
        rev[i] = str[length-1- i];
    }
    rev[length] = '\0'; 
    printf("Reversed string: %s\n", rev);
    return 0;
}

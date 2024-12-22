#include <stdio.h>
#include <math.h>
int main() 
{
    int n,cubeRoot;
    printf("Enter an integer: ");
    scanf("%d",&n); 
    cubeRoot = round(cbrt(n));
    if (cubeRoot * cubeRoot * cubeRoot==n)
        printf("%d is a perfect cube.\n",n);
    else
        printf("%d is not a perfect cube.\n",n);
    return 0;
}

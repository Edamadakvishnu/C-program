#include <stdio.h>
#include <math.h>
int main() 
{
    int num,realnum,remainder,result=0,n=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    realnum=num;
    while (realnum != 0) 
    {
        realnum/=10;
        n++;
    }
    realnum=num;
    while (realnum!=0)
     {
        remainder = realnum% 10;
        result += pow(remainder, n);
        realnum/= 10;
    }
    if (result==num)
        printf("%d is an Armstrong number.\n",num);
    else
        printf("%d is not an Armstrong number.\n",num);
    return 0;
}

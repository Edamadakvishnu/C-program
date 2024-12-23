#include <stdio.h>

int main() {
    int a=10,b=20,c=30,d=40,e=50;
    int *ptr1=&a,*ptr2=&b,*ptr3=&c,*ptr4=&d,*ptr5=&e;
    int sum=*ptr1+*ptr2+*ptr3+*ptr4+*ptr5;
    printf("The sum of the numbers is: %d\n",sum);
    return 0;
}

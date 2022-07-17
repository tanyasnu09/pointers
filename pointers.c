#include <stdio.h>
int main()
{
    int a=76;
    int* ptr=&a;
    printf("the value of a is %d\n",* ptr);
    printf("the value of a is %d\n",a);
    printf("the address of a is %p\n",ptr);
    printf("the value of ptr  is %p\n",&a);
    printf("the address of pointer is %p\n",&ptr);

    }
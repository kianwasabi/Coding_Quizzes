/*
---- 2022/12/17 ----
Q: Swap two numbers (e.g. a=3 and b=5) without a third variable. 
*/
#include <stdio.h>

int main()
{
    int a=3;
    int b=5;
    printf("a=%d,b=%d \n",a,b);
    a=a-b; 
    b=a+b; 
    a=(-a)+b;
    printf("a=%d,b=%d \n",a,b);
    return 0;
}
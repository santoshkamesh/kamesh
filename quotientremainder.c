#include<stdio.h>
int main()
{
    int divident,divisor,quotient,remainder;
    printf("enter divident:");
    scanf("%d",&divident);
    printf("enter divisor:");
    scanf("%d",&divisor);
    quotient= divident/divisor;
    remainder=divident%divisor;
    printf("quotient =%d",quotient);
    printf("remainder=%d",remainder);
    return 0;
}
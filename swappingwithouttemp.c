#include<stdio.h>
int main()
{
    double a,b;
    printf("enter a :");
    scanf("%lf",&a);
    printf("enter b :");
    scanf("%lf",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\n after swapping,a=%.2lf\n",a);
    printf("\n after swapping,b=%.2lf\n",b);
    return 0;
}
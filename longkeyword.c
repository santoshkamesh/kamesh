#include<stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    double e;
    long double f;

    printf("size of int: %zu bites\n",sizeof(a));
    printf("size of long: %zu bites\n",sizeof(b));
    printf("size of long long: %zu bites\n",sizeof(c));
    printf("size of double: %zu bites\n",sizeof(e));
    printf("size of long double: %zu bites\n",sizeof(f));
    return 0;

}
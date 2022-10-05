#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("size of int: %zu bites\n",sizeof(intType));
    printf("size of float: %zu bites\n",sizeof(floatType));
    printf("size of double: %zu bites\n",sizeof(doubleType));
    printf("size of char: %zu bites\n",sizeof(charType));
    return 0;

}
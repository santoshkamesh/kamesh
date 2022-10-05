#include<stdio.h>
int main()
{
    int number;
    printf("enter the integer:");
    scanf("%d",&number);
    if (number<5)
    {
        printf("you entered %d.\n",number);

    }
    printf("the if statement is easy.");
    return 0;
}
#include<stdio.h>
int main()
//program to check whether a given number is positive, negative or zero
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if(num>0)
        printf("%d is a positive number.\n", num);
    else if(num<0)
        printf("%d is a negative number.\n", num);
    else
        printf("%d is zero.\n", num);

    return 0;
}
#include<stdio.h>
int main()
//program to determine whether a given year is a leap year or not.
{
    int year,a;
    printf("Enter the year:\n");
    scanf("%d", &year);
    a=year;
    if((a%4==0 && a%100!=0)||(a%400==0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    return 0;
}
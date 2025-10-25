#include<stdio.h>
int main()
//program to calculate the electricity bill.
{
    int unit;
    float bill;
    printf("Enter number of units consumed:\n");
    scanf("%d", &unit);
    if(unit<=100)
        bill= unit*1.5;
    else if(unit>100 && unit<+200)
        bill= (unit-100)*2 + (100*1.5);
    else if(unit>200 && unit<=300)
        bill= (unit-200)*3 + (100*2) + (100*1.5);
    else
        bill= (unit-300)*5 + (100*3) + (100*2) + (100*1.5);
    
    printf("The total electricity bill is: %f\n", bill);
    return 0;

    }
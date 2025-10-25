#include<stdio.h>
int main(){
    int num,sum;
    printf("enter the number : \n");
    scanf("%d",&num);
    sum=num*(num+1)/2;
    printf("the sum of first %d natural numbers is: %d\n",num,sum);
    return 0;
}
#include<stdio.h>

int main(){
	
	float temp;
	printf("enter the machine temperature in degree celsius");
	scanf("%f",&temp);
	
	if (60<temp && temp<=80){
	
	printf("safe range");
	
	}
	
	else {
		
		printf("warning");
	}
	
	return 0;
	
}
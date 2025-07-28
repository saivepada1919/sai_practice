#include<stdio.h>
int main(){
	int centimeter;
	printf("enter the value in centemeter:");
	scanf("%d",&centimeter);
	float meter=centimeter / 100.0;
	printf("In meters: %.2f meter\n",meter);
	float kilometers= centimeter /100000.0;
	printf("In kilometers :%.5f km\n",kilometers);
	return 0;
}

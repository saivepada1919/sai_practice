#include <stdio.h>
float conversion(float kilograms){
	return  kilograms*1000;
}
int main(){
	float kilograms;
	printf("enter the mass in kilograms:");
	scanf("%f",&kilograms);
	float grams=conversion(kilograms);
	printf("In grams =%.2f\n grams",grams);
	return 0;
}

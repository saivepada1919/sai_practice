#include <stdio.h>
int main(){
	float length;
	printf("enter the value in cm:");
	scanf("%f",&length);
	float meters = length/100.0;
	float kilometers = length/100000.0;
	float inches =length/2.54;
	float feet = length/30.48;
	printf("In meters = %.2f\n",meters);
	printf("In kilometers = %.2f\n",kilometers);
	printf("In inches = %.2f\n",inches);
	printf("In feet = %.2f\n",feet);
	return 0;
}

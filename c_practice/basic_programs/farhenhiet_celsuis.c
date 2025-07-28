#include <stdio.h>
float celsuis(float farhenheit){
	return (farhenheit-32)/1.8;
}
int main(){
	float f;
	printf("enter the temperature farhenheit: ");
	scanf("%f",&f);
	float c=celsuis(f);
	printf("temperature in celusis : %.2f C\n",c);
	return 0;
}

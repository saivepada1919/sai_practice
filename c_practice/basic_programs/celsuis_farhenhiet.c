#include <stdio.h>
float farhenhiet(float celsuis){
	return (celsuis *1.8)+32;
}
int main(){
	float celsuis;
	printf("enter the temperature in celsuis:");
	scanf("%f",&celsuis);
	float f=farhenhiet(celsuis);
	printf("temperature in farhenheit:%.2f F\n",f);
       	return 0;
}

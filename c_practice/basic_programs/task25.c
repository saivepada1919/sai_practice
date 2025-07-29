#include <stdio.h>
float add(float a,float b){
	return a+b;
}
float avg(float a,float b){
        return (a+b)/2;
}
int main(){
	float a,b;
	printf("enter the values to add and find avg = ");
	scanf("%f%f",&a,&b);
	float addition=add(a,b);
	float average=avg(a,b);
	printf("addition of two numbers = %.2f\n",addition);
	printf("average of two numbers =%.2f\n",average);
	return 0;
}

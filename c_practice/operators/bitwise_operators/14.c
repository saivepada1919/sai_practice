#include <stdio.h>
float triangle(float b,float h){
	return (b*h)/2;
}
int main(){
	float base,height;
	printf("enter the base:");
	scanf("%f",&base);
	printf("enter the height:");
        scanf("%f",&height);
	float area=triangle(base,height);
	printf("Area of triangle:%.2f\n",area);
	return 0;
}


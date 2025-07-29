#include <stdio.h>
#include <math.h>
float eq_triangle(float side){
	return (sqrt(3)/4)*side*side;
}
int main(){
	float side;
	printf("enter the side of eq triangle:");
	scanf("%f",&side);
	if (side>0){
		float triangle= eq_triangle(side);
		printf("the area of eq triangle :%.2f",triangle);
	}
	else{
		printf("invalid input (input must be greater than 0)\n");
	}
	return 0;
}

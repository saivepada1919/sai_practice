#include <stdio.h>
void angle(){
	float a,b,c;
	printf("enter the two angles:");
	scanf("%f%f",&a,&b);
	float total=180;
	c=total -(a+b);
	printf("first angle: %.2f\nsecond angle: %.2f\nthird angle: %.2f\n",a,b,c);
}
int main(){
	angle();
	return 0;
}


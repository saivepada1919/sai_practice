#include <stdio.h>
#include <math.h>
int square(float n){
	float result=sqrt(n);
	printf("square root of given %.2f number:%.2f\n",n,result);
}
int main(){
	float n;
	printf("enter the value:");
	scanf("%f",&n);
	square(n);
	return 0;
}

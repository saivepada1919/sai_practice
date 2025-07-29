#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	float angleA,angleB,angleC;
	printf("enter the three sides:");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		angleA=acos((b*b + c*c -a*a)/(2*b*c))*(180/M_PI);
                angleB=acos((a*a + c*c -b*b)/(2*a*c))*(180/M_PI);
                angleC=180-(angleA+angleB);
		printf("The angles of the triangle\n");
		printf("angle A=%.2f degrees\n",angleA);
		printf("angle B=%.2f degrees\n",angleB);
		printf("angle C=%.2f degrees\n",angleC);
	}
	else{
		printf("the given sides are invalid\n");
	}
	return 0;
}

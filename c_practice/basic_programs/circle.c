#include <stdio.h>
float diameter(float r){
	return 2*r;
}
float circumference(float r){
	return 2*3.14*r;
}
float area(float r){
	return 3.14*r*r;
}
int main(){
	float r;
	printf("enter the radius:");
	scanf("%f",&r);
	if(r>0){
		float d=diameter(r);
		float c=circumference(r);
		float a=area(r);

	        printf("diameter of circle : %.2f\n",d);
		printf("circumference of circle :%.2f\n",c);
		printf("area of circle :%2.f\n",a);

	}else{
		printf("not circle or radius less than 0\n");
	}
	return 0;
}

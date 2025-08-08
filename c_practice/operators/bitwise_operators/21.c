#include <stdio.h>
float bmi(float w,float h){
	return w/(h*h);
}
int main(){
	float w,h;
	printf("enter the weight in kg's and height in m:");
	scanf("%f%f",&w,&h);
	float bodymi=bmi(w,h);
	if(bodymi<18.5){
		printf("%.2f underweight\n",bodymi);
	}else if(bodymi>=18.5 && bodymi<25){
		printf("%.2f healthy person or normal\n",bodymi);
	}
	else if(bodymi >=25 && bodymi<=30){
		printf("%.2f overweight\n",bodymi);
	}else{
		printf("%.2f obesity\n",bodymi);
	}
	return 0;
}


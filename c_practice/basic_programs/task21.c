#include <stdio.h>
float total(float a,float b,float c,float d,float e){
	return a+b+c+d+e;
}
float average(float a,float b, float c,float d,float e,int subjects){
        return (a+b+c+d+e)/subjects;
}
float percentage(float a,float b, float c,float d,float e){
	return ((a+b+c+d+e)/500.0)*100;
}
int main(){
	float a,b,c,d,e;
	int subjects;
	printf("enter no.of subjects=");
	scanf("%d",&subjects);
	printf("enter marks of subject A=");
	scanf("%f",&a);
	printf("enter marks of subject B=");
	scanf("%f",&b);
	printf("enter marks of subject C=");
	scanf("%f",&c);
	printf("enter marks of subject D=");
	scanf("%f",&d);
	printf("enter marks of subject E=");
	scanf("%f",&e);
	float t=total(a,b,c,d,e);
	float avg=average(a,b,c,d,e,subjects);
	float p=percentage(a,b,c,d,e);
	printf("total marks obtained=%.2f\n",t);
	printf("average of marks =%.2f\n",avg);
        printf("percentage of marks =%.2f %%\n",p);
	return 0;
}



#include <stdio.h>
#include <math.h>
float interest(double p,double b){
	return p*b-p;
}
int main(){
	double p,t,r;
	printf("enter the principle,time and rate to calculate compound interest: ");
	scanf("%lf%lf%lf",&p,&t,&r);
	double a=1+(r/100);
	double b=pow(a,t);
	double compound_interest=interest(p,b);
	printf("simple interest = %.2lf\n",compound_interest);
	return 0;
}

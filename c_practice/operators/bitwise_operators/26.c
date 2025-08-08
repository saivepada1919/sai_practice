#include <stdio.h>
#include <math.h>
int fact(int n){
	int fact=1;
	for (int i=2;i<=n;i++){
	       fact=fact*i;
	}return fact;
}
int main(){
	int n;
	printf("enter no.of terms");
	scanf("%d",&n);
	float x,sum=0;
	printf("enter the x value");
	scanf("%f",&x);
	for(int i=0;i<n;i++){
		sum=sum+pow(x,i)/fact(i);
	}
	printf("exponential sum =%.2f\n",sum);
	return 0;
}

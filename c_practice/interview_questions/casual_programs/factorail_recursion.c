#include <stdio.h>
int factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("factorial of given number: %d\n",fact);
	return 0;
}


#include <stdio.h>
int factorial(int n){
	if(n == 1 || n == 0){
		return 1;
	}
	return n*factorial(n-1);
}
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int res = factorial(n);
	printf("factorail of give number %d = %d\n",n,res);
	return 0;
}

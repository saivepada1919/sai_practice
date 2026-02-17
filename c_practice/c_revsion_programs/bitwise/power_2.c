#include <stdio.h>
int main(){
	int n;
	printf("enter the n value :");
	scanf("%d",&n);
	if((n & (n-1)) ==0) {
		printf("Power of 2\n");
	}
	else{
		printf("power not power of 2\n");
	}
}

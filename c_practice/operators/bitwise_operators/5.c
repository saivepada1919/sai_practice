#include <stdio.h>
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	if((n & (n-1) )==0){
		printf("%d is a power of two\n",n);
	}
	else
	{
		printf("%d is not power of two\n",n);
	}
	return 0;
}

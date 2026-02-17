#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	if(n&(1<<0))
		printf("Least significant bit : 1\n");
	else
		printf("Least siginificant bit : 0\n");
	return 0;
}

#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	n=~n;
	printf("after flip all bits : %u\n",n);
	return 0;
}


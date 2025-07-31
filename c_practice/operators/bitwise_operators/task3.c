#include <stdio.h>
int main(){
	int n,k;
	printf("enter the value and postion :");
	scanf("%d%d",&n,&k);
	if(n & (1 << k)){
		printf("no need to change\n");
	}
	else{
		n=n ^ (1 << k);
		printf("after change the bit =%d\n",n);
	}
	return 0;
}

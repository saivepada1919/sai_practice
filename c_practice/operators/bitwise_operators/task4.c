#include <stdio.h>
int main(){
	int n,k;
	printf("enter the value and position:");
	scanf("%d%d",&n,&k);
	n=n|(1<<k);
	printf("after set the bit=%d\n",n);
	return 0;
}


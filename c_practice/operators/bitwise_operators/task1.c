#include <stdio.h>
int main(){
	int n,k;
	printf("enter the value:");
	scanf("%d%d",&n,&k);
	if (n&(1<<k)){
		printf("bit is set(1)\n");
		}
	else{
		printf("not set(1) it is 0\n");
	}
	return 0;
}


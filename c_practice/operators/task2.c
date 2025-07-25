#include <stdio.h>
int main(){
	int num, k;
	printf("enter the value and position:");
	scanf("%d %d",&num,&k);
	num=num & ~(1<<k);
	printf("num=%d\n",num);
	return 0;
}


#include <stdio.h>
int main(){
	int x,k;
	printf("enter the value and position:");
	scanf("%d %d",&x,&k);
	x=x ^ (1<<k);
	printf("x=%d\n",x);
	return 0;
}

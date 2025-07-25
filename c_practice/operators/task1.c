#include <stdio.h>
int main(){
	int x,k;
	printf("enter the number and postion want to change:");
	scanf("%d %d",&x,&k);
	x=x | (1<<k);
	printf("x=%d\n",x);
	return 0;
}

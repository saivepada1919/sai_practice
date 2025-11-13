#include <stdio.h>
int main(){
	int n;
	printf("enter n value: ");
	scanf("%d",&n);
	int pos;
	printf("enter the pos: ");
	scanf("%d",&pos);
	n= n | (1<<pos);
	printf("after set particular %d position n = %d\n",pos,n);
	return 0;
}

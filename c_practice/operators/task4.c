#include <stdio.h>
int main(){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	int y=x & (x-1);
	printf("y=  %d\n",y);
	return 0;
}

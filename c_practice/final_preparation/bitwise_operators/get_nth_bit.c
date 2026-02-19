#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value: ");
	scanf("%u",&n);
	int pos;
	printf("enter the pos to check : ");
	scanf("%d",&pos);
	if(n & (1<<pos)){
		printf("SET\n");
	}
	else{
		printf("RESET\n");
	}
	return 0;
}

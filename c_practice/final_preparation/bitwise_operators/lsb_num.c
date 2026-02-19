#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%u",&n);
	if(n & 0x1){
		printf("SET\n");
	}
	else{
		printf("RESET\n");
	}
	return 0;
}

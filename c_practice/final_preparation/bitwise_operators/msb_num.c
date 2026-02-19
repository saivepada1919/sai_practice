#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%u",&n);
	int size = sizeof(int)*8;
	if(n & 0x80000000){
		printf("SET\n");
	}
	else{
		printf("RESET\n");
	}
	return 0;
}

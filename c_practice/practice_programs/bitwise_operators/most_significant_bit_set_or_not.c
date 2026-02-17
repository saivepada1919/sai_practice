#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	if(n & (1<<(size-1))){
		printf("MSB is : 1\n");
	}
	else{
		printf("MSB is : 0\n");
	}
	return 0;
}

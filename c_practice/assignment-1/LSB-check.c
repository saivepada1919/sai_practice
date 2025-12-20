#include <stdio.h>
int main(){
	int n;
	printf("enter n value : ");
	scanf("%d",&n);
	if(n&1){
		printf("LSB : 1\n");
	}
	else{
		printf("LSB : 0\n");
	}
	return 0;
}

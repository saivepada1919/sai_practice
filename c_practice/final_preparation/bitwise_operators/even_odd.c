#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	if(n & 1){
		printf("ODD NUMBER\n");
	}
	else{
		printf("EVEN NUMBER\n");
	}
}

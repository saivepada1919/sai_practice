#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	if(n&1){
		printf("odd number\n");
	}
	else{
		printf("even number\n");
	}
	return 0;
}


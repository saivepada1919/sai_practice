#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	if((n>>31)&1){
		printf("%d MSB is set bit \n",n);
	}
	else{
		printf("%d MSB is not set bit \n",n);
	}
	return 0;
}

#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	if(n&1){
		printf("%d LSB is set \n",n);
	}
	else{
		printf("%d LSB is not set \n",n);
	}
	return 0;
}

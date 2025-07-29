#include <stdio.h>
int main(){
	int a;
	printf("enter the value: ");
	scanf("%d",&a);
	if ((a & 1) ==0){
		printf("even number\n");
	}
	else{
		printf("odd number\n");
	}
	return 0;
}

#include <stdio.h>
int main(){
	int a;
	printf("Enter two numbers: ");
	scanf("%d",&a);
	if (a & 1){
		printf("%d id odd number\n",a);
	}
	else{
		printf("%d is even number\n",a);
	}
	return 0;
}

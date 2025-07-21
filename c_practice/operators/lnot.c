#include <stdio.h>
int main(){
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if(!(a%3==0 || a%5==0)){
		printf("%d is not divisible by 3 or 5\n",a);
	}
	else{
		printf("%d is divisible by 3 or 5\n",a);
	}
	return 0;
}

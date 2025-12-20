#include <stdio.h>
int main(){
	int a,b;
	printf("enter the a and b value : ");
	scanf("%d %d",&a,&b);
	printf("Before sawpping a : %d and b : %d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after sawpping a : %d and b : %d\n",a,b);
	return 0;
}

	

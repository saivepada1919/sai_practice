#include <stdio.h>
int main(){
	unsigned int a;
	printf("enter the a value : ");
	scanf("%d",&a);
	unsigned int b;
	printf("enter the b value : ");
	scanf("%d",&b);
	printf("before swapping a = %d b = %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("After swapping a = %d b = %d\n",a,b);
	return 0;
}


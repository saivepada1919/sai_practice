#include <stdio.h>
int main(){
	int a,b;
	printf("enter the values to swap: ");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("after swapping a=%d b=%d\n",a,b);
	return 0;
}

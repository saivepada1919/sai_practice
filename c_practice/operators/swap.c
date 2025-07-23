#include <stdio.h>
int main(){
	int a,b;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	a = a ^ b;
        b = a ^ b;
        a = a ^ b;
	printf("after swapping a=%d and b=%d \n",a,b);
        return 0;
}

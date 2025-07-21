#include <stdio.h>
int main(){
	int a=1;
	printf("before incremnt and decrement: %d\n",a);
	printf("before pre increment:%d\n",++a);
	printf("after pre increment:%d\n",a);
	printf("before post increment: %d\n",a++);
	printf("after post increment: %d\n",a);
	printf("before pre decrement:%d\n",--a);
        printf("after pre decrement:%d\n",a);
	printf("before post decrement: %d\n",a--);
	printf("after post decrement: %d\n",a);
	return 0;
}

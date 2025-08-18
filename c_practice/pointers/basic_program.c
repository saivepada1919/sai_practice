#include <stdio.h>
int main(){
	int a=6;
	int *ptr=&a;
	printf("result without pointer: %d\n",a);
	printf("address of a: %p\n",ptr);
	printf("using pointer to acess the value: %d\n",*ptr);
	return 0;
}

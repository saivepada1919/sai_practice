#include <stdio.h>
int main(){
	int a = 10;
	int *p = &a;
	printf("address of a: %p\n",p);
	printf("address if increse by (p+1): %p",(p+1));
	return 0;

}

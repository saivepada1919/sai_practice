#include <stdio.h>
int main(){
	int a = 10;
	char c = 'A';
	float f = 3.14;
	int *p1 = &a;
	char *p2 = &c;
	float *p3 = &f;
	printf("a = %d        address = %p    increment address = %p\n",*p1,p1,p1+1);
	printf("c = %c        address = %p    increment address = %p\n",*p2,p2,p2+1);
	printf("f = %f        address = %p    increment address = %p\n",*p3,p3,p3+1);
	return 0;
}

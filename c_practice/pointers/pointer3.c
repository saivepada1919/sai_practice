#include <stdio.h>
int main(){
	int a = 1;
	char b = 'A';
	float c = 3.14;
	int *p1 = &a;
	char *p2 = &b;
	float *p3 = &c;
	printf("orignal address of a: %p\n",p1);
	printf("address of a after p1+1: %p\n",p1+1);
	printf("orignal address of b: %p\n",p2);
	printf("address of b after p2+1: %p\n",p2+1);
	printf("orignal address of a: %p\n",p3);
	printf("address of c after p3+1: %p\n",p3+1);
	return 0;
}

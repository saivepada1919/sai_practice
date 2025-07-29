#include <stdio.h>
int main(){
	char a;
	int b;
	float c;
	double d;
	short int e;
	long int f;
	printf("size of char variable= %lu bytes\n",sizeof(a));
	printf("size of int variable= %lu bytes\n",sizeof(b));
	printf("size of float variable= %lu bytes\n",sizeof(c));
	printf("size of double variable= %lu bytes\n",sizeof(d));
	printf("size of short int variable= %lu bytes\n",sizeof(e));
	printf("size of long int variable= %lu bytes\n",sizeof(f));
	return 0;
}

#include <stdio.h>
int main(){
	int a=10;
	int *p=&a;
	int **pp=&p;
	printf("a=%d    address=%p\n",a,&a);
	printf("*p=%d   address=%p\n",*p,p);
	printf("**pp=%d   address=%p\n",**pp,pp);
	return 0;
}

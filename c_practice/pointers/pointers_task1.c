#include <stdio.h>
void address(int *a,char *c,float *f){
	printf("x = %d         address:%p\n",*a,a);
	printf("c = %c         address:%p\n",*c,c);
	printf("f = %f         address:%p\n",*f,f);
}
int main(){
	int x=10;
	char ch = 'A';
	float fl = 3.14;
	int *a = &x;
	char *c = &ch;
	float *f = &fl;
	address(&x,&ch,&fl);
	return 0;
}

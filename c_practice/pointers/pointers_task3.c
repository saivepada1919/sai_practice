#include <stdio.h>
int sum(int *x,int *y){
	return *x + *y;
}
int main(){
	int a=10,b=20;
	int *p1 = &a;
	int *p2 = &b;
	printf("sum of a = %d and  b = %d\n",*p1,*p2);
        int res = sum(p1,p2);
	printf("sum of two numbers : %d\n",res);

	return 0;
}


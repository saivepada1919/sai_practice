#include <stdio.h>
void swap(int *x,int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main(){
	int a=10,b=20;
	int *p1=&a;
	int *p2=&b;
	printf("before swapping a = %d and b = %d\n",*p1,*p2);
	swap(p1,p2);
	printf("After swapping a = %d and b = %d\n",*p1,*p2);
	return 0;
}

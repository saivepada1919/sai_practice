#include <stdio.h>
int main(){
	int x = 25;
	float y = 3.14;
	int *ptr1 = &x;
	float *ptr2 = &y;
	printf("value of x: %d\n",x);
	printf("address of x: %p\n",ptr1);
	printf("value of x by using pointer varialble: %d\n",*ptr1);
	printf("value of y: %f\n",y);
	printf("address of y: %p\n",ptr2);
	printf("value of y by using pointer varialble: %f\n",*ptr2);
	return 0;
}

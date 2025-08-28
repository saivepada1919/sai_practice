#include <stdio.h>
void update(int *x,int *y){
	*x = 10;
	*y *=2;
}
int main(){
	int a,b;
	printf("enter the values a and b :");
	scanf("%d%d",&a,&b);
	printf("original elemnts a = %d and b = %d\n",a,b);
	update(&a,&b);
	printf("after modifying values a = %d and b = %d\n",a,b);
	return 0;
}

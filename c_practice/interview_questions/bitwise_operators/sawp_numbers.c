#include <stdio.h>
int main(){
	int a,b;
	printf("enter a and b values : ");
	scanf("%d%d",&a,&b);
	printf("before swaping a = %d and b = %d\n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("after swapping a = %d and b = %d\n",a,b);
	return 0;
}	

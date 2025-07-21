#include <stdio.h>
void ternary(){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	(x>0)?printf("positive:%d\n",x):printf("negitive: %d\n",x);
}
int main(){
	ternary();
	return 0;
}

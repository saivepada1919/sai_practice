#include <stdio.h>
int main(){
	int x,y;
	printf("enter two numbers: ");
	scanf("%d %d",&x,&y);
	(x>y)?printf("maximum: %d\n",x) : printf("maximum: %d\n",y);
	return 0;
}

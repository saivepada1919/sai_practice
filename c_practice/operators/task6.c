#include <stdio.h>
int main(){
	int x;
	printf("enter the value: ");
	scanf("%d",&x);
	int result = ~x;
	printf("result = %d\n",result);
	return 0;
}

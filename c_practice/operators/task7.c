#include <stdio.h>
int main(){
	int x;
	printf("enter the number: ");
	scanf("%d",&x);
	int result = x ^ 0xFFFFFFFF;
	printf("result =%d\n",result);
	return 0;
}

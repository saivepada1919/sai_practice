#include <stdio.h>
int main(){
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	int result = ~a;
	printf("result= %d\n",result);
	return 0;
}

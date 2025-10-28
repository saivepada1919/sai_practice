#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	char str[8];
	for(int i=7;i>=0;i--){
		str[i]=(n>>i)&1;
	}
	printf("binary number of given number:");
	for(int i=7;i>=0;i--){
		printf("%d",str[i]);
	}
	printf("\n");
	return 0;
}


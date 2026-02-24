#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int res = n*(n+1)/2;
	for(int i = 1;i<=n;i++){
		for(int j =1;j<=i;j++){
			printf("%d ",res--);
		}
		printf("\n");
	}
}

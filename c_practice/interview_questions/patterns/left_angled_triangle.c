#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int k = 1;
		for(int j=1;j<=n-i;j++){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf(" %d",k++);
		}
		printf("\n");
	}
	return 0;
}


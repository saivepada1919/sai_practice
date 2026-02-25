#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char ch = 'A';
		for(int j = 1;j<=i;j++){
			printf("%c ",ch++);
		}
		printf("\n");
	}
}


#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i = n-1;i>=1;i--){
	for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
}

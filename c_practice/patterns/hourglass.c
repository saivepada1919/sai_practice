#include <stdio.h>
int main(){
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=2*n-i*2;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf("*");
		}
		for(j=1;j<=i*2;j++){
			printf(" ");
		}
		for(j=n-1;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
}

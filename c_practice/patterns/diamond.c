#include <stdio.h>
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	for (int m=n-1;m>=1;m--){
		for(int k=1;k<=n-m;k++){
			printf(" ");
		}
		for (int p=1;p<=2*m-1;p++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

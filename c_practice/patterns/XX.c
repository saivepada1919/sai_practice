#include <stdio.h>
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<2*n;j++){
			if(i==j||i+j==n-1||j==n+i||i+j==2*n-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

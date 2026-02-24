#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i=n;i>=1;+i--){
		for(int j=1;j<=n-i;j++){
			printf("  ");
		}
		char ch ='A';
		for(int j = 1;j<=2*i-1;j++){
			if(i == n || j == 1 || j == 2*i-1){
				printf("%c ",ch);
			}
			else{
				printf("  ");
			}
			ch++;
		}
		printf("\n");
	}
}


#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i =1;i<=n;i++){
		char ch = 'A';
		for(int j=1;j<=n-i;j++){
			printf("  ");
		}
		for(int j=1;j<=2*i-1;j++){
			if(j<i){
				printf("%c ",ch++);
			}
			else{
				printf("%c ",ch--);
			}
		}
		printf("\n");
	}
	for(int i = n-1;i>=1;i--){
		char ch = 'A';
		for(int j = 1;j<=n-i;j++){
			printf("  ");
		}
		for(int j = 1;j<=2*i-1;j++){
			if(j<i){
				printf("%c ",ch++);
			}
			else{
				printf("%c ",ch--);
			}
		}
		printf("\n");
	}
}


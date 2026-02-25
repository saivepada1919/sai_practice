#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1 || i== n || j == 1|| j==n){
				printf("*");
			}
			else if(i == (n/2)+1){
				if(j%2 != 0){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}


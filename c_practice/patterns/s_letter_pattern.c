#include <stdio.h>
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==n || i==n/2+1){
				printf("*");
			}
			else if(i<n/2+1 && j==1){
				printf("*");
			}
			else if(i>n/2 && j==n){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
                printf("\n");
	}
	return 0;
}
	


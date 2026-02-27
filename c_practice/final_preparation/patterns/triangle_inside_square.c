#include <stdio.h>
int main(){
	int n;
	printf("Enter the n value : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==1 || j==n || i==1 || i == n || (i == j && i <= n/2) ||((j == i || j == n - i + 1) && i <= n/2 + 1)){				printf("* ");
			}
			else{	
				printf("  ");
			}
		}
		printf("\n");
	}
}


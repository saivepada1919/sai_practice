#include <stdio.h>
int main(){
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf(" ");
		}
		int val=1;
		for(int j=0;j<=i;j++){
			printf("%d",val);
			val=val*(i-j)/(j+1);
		}
		printf("\n");
	}
}


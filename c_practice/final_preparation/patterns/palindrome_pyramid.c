#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int num;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf("  ");
		}
		num = 1;
		for(int j=1;j<=2*i-1;j++){
			if(j<i)
				printf("%d ",num++);
			else
				printf("%d ",num--);
		}
		printf("\n");
	}
}



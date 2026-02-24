#include <stdio.h>
int prime(int n){
	for(int i =2;i<=n/2;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int num = 2;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n-i;j++){
			printf("  ");
		}
		for(int j = 1;j<=n;j++){
			if(prime(num)){
				printf("%d ",num);
			}
			else{
				j--;
			}
			num++;
		}
		printf("\n");
	}
}


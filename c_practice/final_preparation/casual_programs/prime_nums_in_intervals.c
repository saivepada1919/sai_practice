#include <stdio.h>
int prime(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	for(int i = 2;i=n/2;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int start,end;
	printf("enter the starting value : ");
	scanf("%d",&start);
	printf("ente the ending value : ");
	scanf("%d",&end);
	for(int i = start;i<=end;i++){
		int res  = prime(i);
		if(res == 1){
			printf("%d ",i);
		}
	}
	printf("\n");
}



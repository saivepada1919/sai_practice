#include <stdio.h>
int prime(int n){
	if(n ==0 || n == 1){
		return 0;
	}
	int flag = 1;
	for(int i = 2;i<=n/2;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int start,end;
	printf("enter the start value : ");
	scanf("%d",&start);
	printf("enter the end value : ");
	scanf("%d",&end);
	for(int i = start ;i<=end;i++){
		int res1 = prime(i);
		if(res1){
			int res2 = prime(i-2);
			if(res2){
				printf("%d %d\n ",i-2,i);
			}
		}
	}
}


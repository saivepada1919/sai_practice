#include <stdio.h>
int twin_prime(int n){
	if(n == 1 || n == 0){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i == 0){
			return 0;
			break;
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
	for(int i = start;i<=end;i++){
		int res = twin_prime(i);
		if(res){
			int j = twin_prime(i-2);
			if(j){
				printf("%d,%d\n",i-2,i);
			}
		}
	}
}


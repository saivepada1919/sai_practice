#include <stdio.h>
void perfect(int n){
	int sum = 0;
	for(int i=1;i<n;i++){
		if(n%i == 0){
			sum += i;
		}
	}
	if(n == sum){
		printf("%d ",n);
	}
}

int main(){
	int s,e;
	printf("enter the starting value : ");
	scanf("%d",&s);
	printf("enter the ending value : ");
	scanf("%d",&e);
	for(int i=s;i<=e;i++){
		perfect(i);
	}
	printf("\n");
	return 0;
}

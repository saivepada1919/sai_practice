#include <stdio.h>
void prime(int n){
	int isprime = 1;
	for(int i=2;i<n;i++){
		if(n%i == 0){
			isprime = 0;
			break;
		}
	}
	if(isprime){
		printf("%d ",n);
	}
}

int main(){
	int s,e;
	printf("enter the start value : ");
	scanf("%d",&s);
	printf("enter the ending number : ");
	scanf("%d",&e);
	for(int i=s;i<=e;i++){
		prime(i);
	}
	printf("\n");
	return 0;
}

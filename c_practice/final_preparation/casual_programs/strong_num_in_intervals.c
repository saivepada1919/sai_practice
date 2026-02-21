#include <stdio.h>
int fact(int n){
	int f = 1;
	for(int i = 2;i<=n;i++){
		f = f * i;
	}
	return f;
}

int strong(int n){
	if(n == 1){
		return n;
	}

	int sum = 0;
	while(n != 0){
		int rem = n % 10;
	        sum = sum + fact(rem);	
		n /= 10;
	}
	return sum;
}

int main(){
	int start,end;
	printf("enter the starting value : ");
	scanf("%d",&start);
	printf("enter the ending value : ");
	scanf("%d",&end);
	for(int i = start;i<=end;i++){
		int res = strong(i);
		if(res == i){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}


#include <stdio.h>
int fac(int k){
	int fact=1;
	for(int i=2;i<=k;i++){
		fact=fact*i;
	}
	return fact;
}
int strong(int i){
	int sum=0;
	while(i!=0){
		int k=i%10;
		sum +=fac(k);
		i=i/10;
	}
	return sum;
}
int main(){
	int start,end;
	printf("enter the starting number:");
	scanf("%d",&start);
	printf("enter the ending number:");
	scanf("%d",&end);
	for(int j=start;j<=end;j++){
		int s=strong(j);
		if(j==s){
			printf("%d ",j);
		}
	}
}
	


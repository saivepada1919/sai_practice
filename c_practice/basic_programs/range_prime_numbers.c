#include <stdio.h>
#include <math.h>
int prime(int n){
	if(n<=1){ 
		return 0;
	}
	if(n==2){
		return 1;
	}
	if(n>2){
	for(int i=3;i<=n/2;i++){
			if(n%i==0){
				return 0;
			}
	}
	return 1;
}
}
int main(){
	int start,end;
	printf("enter the range of values:");
	scanf("%d%d",&start,&end);
	for(int i=start;i<=end;i++){
		if(prime(i)){
			printf("%d",i);
		}
	}
}


	

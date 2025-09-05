#include <stdio.h>
int perfect(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
}
int main(){
	int n;
	printf("enter the number :");
        scanf("%d",&n);
	int res=perfect(n);
	if(n==res){
		printf("%d perfect number\n",n);
	}
	else{
		printf("%d not a perfect number\n",n);
	}
	return 0;
}


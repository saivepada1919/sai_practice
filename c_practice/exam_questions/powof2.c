#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("enter the na value:");
	scanf("%d",&n);
	int temp=n;
	int count=0;
	while(n!=1){
		n=n/2;
		count++;
	}
	int res=pow(2,count);
	if(temp == res){
		printf("pow of 2\n");
	}
	else{
		printf("not pow of 2\n");
	}
	return 0;
}


#include <stdio.h>
void fib(int a,int b,int n,int temp){
	printf("fibnocci series: ");
	for(int i=1;i<n;i++){
		printf("%d ",a);
		temp=a+b;
		a=b;
		b=temp;
	}	
	printf("\n");
}
int main(){
	int a=0,b=1,temp;
	int n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	fib(a,b,n,temp);
	return 0;
}

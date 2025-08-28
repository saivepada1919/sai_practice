#include <stdio.h>
int main(){
	int a=0,b=1;
	int n;
	printf("enter the no.of terms:");
	scanf("%d",&n);
	printf("fibnocci series:");
	for(int i=0;i<=n;i++){
		printf("%d ",a);
		int temp=a + b;
		a=b;
		b=temp;
	}
}

#include <stdio.h>
int main(){
	int n,i=1,mul,k;
	printf("enter the value:");
	scanf("%d %d",&n,&k);
	do{
		mul=n*i;
		printf("%d x %d = %d\n",n,i,mul);
		i++;
	}while(i<=k);
	return 0;
}

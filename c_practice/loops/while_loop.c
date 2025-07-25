#include <stdio.h>
int main(){
	int n,sum=0,i=1;
	printf("enter the value: ");
	scanf("%d",&n);
	while (i<=n){
		sum +=i;
		i++;
	}
	printf("sum of 0 to %d = %d\n",n,sum);
	return 0;
}
	
	

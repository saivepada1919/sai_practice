#include <stdio.h>
int main(){
	int n,k;
	printf("enter the value and postion to toggle :");
	scanf("%d%d",&n,&k);
	n=n ^ (1<<k);
	printf("after the toggle is =%d\n",n);
	return 0;
}

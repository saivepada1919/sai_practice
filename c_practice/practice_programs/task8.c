#include <stdio.h>
int main(){
	int n,count=0,m,prev=-1;
	printf("enter the value:");
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		if(m>prev){
			count++;
		}
		prev=m;
		n/=10;
	}
	printf("count=%d\n",count);
	return 0;
}


#include <stdio.h>
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int k;
	printf("enter the no.of postions to rotate left:");
	scanf("%d",&k);
	int rev1=0;
	for(int i=1;i<=k;i++){
		rev1=rev1<<1;
		if(n&1){
			rev1=rev1|1;
		}
	}
	n=n&(~(1<<k));
	rev1=rev1<<k;
	n=n|k;
	printf("%d",n);
}
		

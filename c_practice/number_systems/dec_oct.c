#include <stdio.h>
int main(){
	int n;
	printf("enter the dec no:");
	scanf("%d",&n);
	int oct[32];
	int i=0;
	while(n>0){
		int rem=n%8;
		oct[i]=rem;
		i++;
		n/=8;
	}
	printf("octal number: ");
	for(int j=i-1;j>=0;j--){
		printf("%d",oct[j]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
int main(){
	int n;
	printf("enter the decimal no:");
	scanf("%d",&n);
	int bin[32];
	int i=0;
	while(n>0){
		int k=n%2;
		bin[i]=k;
		i++;
		n/=2;
	}
	for(int j=i-1;j>=0;j--){
		printf("%d",bin[j]);
	}
	printf("\n");
	return 0;
}

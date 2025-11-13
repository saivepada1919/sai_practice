#include <stdio.h>
void count(int n){
	int ones=0,zeros=0;
	int size = sizeof(int)*8;
	for(int i =0;i<size;i++){
		if(n>>i&1){
			ones++;
		}
		else{
			zeros++;
		}
		n=n>>1;
	}
	printf("ones in given number: %d\n",ones);
	printf("zeros in given number : %d\n",zeros);
}
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	count(n);
	return 0;
}



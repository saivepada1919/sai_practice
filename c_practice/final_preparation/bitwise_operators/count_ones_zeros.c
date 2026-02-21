#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int size = sizeof(int)*8;
	int ones=0,zeros=0;
	for(int i = 0;i<size;i++){
		if((n >> i) & 1){
			ones++;
		}
		else{
			zeros++;
		}
	}
	printf("ones : %d\nzeros : %d\n",ones,zeros);
}

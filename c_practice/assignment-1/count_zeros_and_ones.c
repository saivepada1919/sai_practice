#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int ones=0,zeros = 0;
	int size = sizeof(int)*8;
	for(int i=0;i<size;i++){
		if((n>>i) & 1){
			ones++;
		}
		else{
			zeros++;
		}
	}
	printf("ones : %d\n",ones);
	printf("zeros : %d\n",zeros);
	return 0;
}


#include <stdio.h>
int main(){
	unsigned int n;
	printf("enter the n value : ");
	scanf("%u",&n);
	char shift;
	int pos;
	printf("enter the pos to shift : ");
	scanf("%d",&pos);
	printf("enter the shift(l/r) : ");
	scanf(" %c",&shift);
	int size = sizeof(int)*8;
	if(shift == 'l'){
		n = (n << pos) | (n >> (size - pos));
	        printf("n after left shifting : %d\n",n);
	}
	else if(shift == 'r'){
		n = (n >> pos) | (n << (size - pos));
	        printf("n after right shifting : %d\n",n);
	}
	else{
		printf("Invalid shift\n");
	}
	return 0;
}

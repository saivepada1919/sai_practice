#include <stdio.h>
int main(){
	int n,pos;
	printf("enter the n value : ");
	scanf("%d",&n);
	printf("before set the n value : %d\n",n);
	printf("enter the pos to want set bit : ");
	scanf("%d",&pos);
	if(pos < 0 || pos>=(sizeof(int)*8)){
		printf("INAVLID POSTION\n");
		return 0;
	}
	n = n | (1<<pos);
	printf("after set the bit at particular position the n value : %d\n",n);
	return 0;
}

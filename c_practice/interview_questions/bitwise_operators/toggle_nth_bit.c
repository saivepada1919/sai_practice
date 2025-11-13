#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int pos;
	printf("before toggling particular postion the n value : %d\n",n);
	printf("enter the pos to toggle : ");
	scanf("%d",&pos);
	if(pos<0 || pos >= sizeof(int)*8){
		printf("Invalid input\n");
		return 0;
	}
	n = n^(1<<pos);
	printf("after toggling particular position the n value : %d\n",n);
	return 0;
}

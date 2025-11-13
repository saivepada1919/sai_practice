#include <stdio.h>
int main(){
	int n;
	printf("emnter the n value: ");
	scanf("%d",&n);
	int pos;
	printf("enter the pos to set : ");
	scanf("%d",&pos);
	if(pos<0 || pos>=sizeof(int)*8){
		printf("Invalid input\n");
		return 0;
	}
	printf("before position to set bit the n value: %d\n",n);
	n = n|(1<<pos);
	printf("after set particular position the n value: %d\n",n);
	return 0;
}
	


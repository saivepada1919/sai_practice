#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int pos;
	printf("enter the pos to clear: ");
	scanf("%d",&pos);
	if (pos < 0 || pos >= sizeof(int)*8) {
		printf("Invalid bit position!\n");
		return 0;
	}
	printf("before clear the particluar position the n value : %d\n",n);
	n = n&~(1<<pos);
	printf("after clear the particular position the n value : %d\n",n);
	return 0;
}

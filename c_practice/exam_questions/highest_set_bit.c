#include <stdio.h>
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int position=-1;
	for(int i=31;i>=0;i--){
		if(n & (1<<i)){
			position=i;
			break;
		}
	}
	printf("highest set bit position of given number: %d\n",position);
	return 0;
}

#include <stdio.h>
int main(){
        unsigned int n;
        printf("enter the n value : ");
        scanf("%u",&n);
	for(int i = 31;i>=0;i--){
		if((n >> i) & 1){
			printf("highest set bit pos : %d\n",i);
			break;
		}
	}
	return 0;
}

#include <stdio.h>
int main(){
        unsigned int n;
        printf("enter the n value : ");
        scanf("%u",&n);
	for(int i = 0;i<32;i++){
		if((n >> i) & 1){
			printf("lowest set bit pos : %d\n",i);
			break;
		}
	}
	return 0;
}
		

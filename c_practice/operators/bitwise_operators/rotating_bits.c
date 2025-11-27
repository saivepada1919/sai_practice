#include <stdio.h>
#include <stdint.h>
uint8_t rotate(uint8_t n,uint8_t k,uint8_t shift){
	if(shift==1){
		n=(n<<k)|(n>>8-k);
		printf("after rotation is left side:%d\n",n);
	}
	else if(shift==0){
		n=(n>>k)|(n<<8-k);
		printf("after rotation is right side:%d\n",n);
	}
	else{
	     printf("invalid input\n");
	     }
	     
	return n;

}
int main(){
        int n,k,shift;
	printf("enter the value and no.of bits to rotate:");
	scanf("%d%d%d",&n,&k,&shift);
        rotate(n,k,shift);
	return 0;
	}

#include <stdio.h>
#include <stdint.h>

int main(){
	uint16_t n;
	printf("enter the n value : ");
	scanf("%hx",&n);
	n = ((n & 0xF000) >> 12) | ((n & 0x0F00) >> 4) | ((n & 0x00F0) << 4) | ((n & 0x000F) << 12);
	printf("%x\n",n);
	return 0;
}

#include <stdio.h>
int main(){
        unsigned int n;
        printf("enter the n value : ");
        scanf("%u",&n);
	n = ~n;
        printf("after flip n value : %u\n",n);
        return 0;
}


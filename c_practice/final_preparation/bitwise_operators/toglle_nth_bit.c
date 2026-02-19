#include <stdio.h>
int main(){
        unsigned int n;
        printf("enter the n value : ");
        scanf("%u",&n);
        int pos;
        printf("enter the pos :");
        scanf("%d",&pos);
	n = n ^ (1 << pos);
	printf("n value : %d\n",n);
	return 0;
}

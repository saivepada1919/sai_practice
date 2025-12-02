#include <stdio.h>
int main(){
	int m,mul=1;
	printf("enter the value:");
	scanf("%d",&m);
	while (m!=0){
		int d=m%10;
		if (d !=0){
			mul=mul*d;
		}
		m/=10;
	}
	printf("mul of given number digits=%d\n",mul);
	return 0;
}


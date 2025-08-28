#include <stdio.h>
int main(){
	int n[7]={1,2,3,4,5,9,7};
	int *p = n;
	int sum =0 ;
	for(int i=0;i<7;i++){
		sum += *(p+i);
	}
	printf("sum of array : %d\n",sum);
	return 0;
}

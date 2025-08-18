#include <stdio.h>
int main(){
	int arr[5]={2,4,5,1,6};
	int *p=arr;
	for(int i=0;i<5;i++){
		printf("%dth element : %d     address:%p\n",i+1,*(p+i),p+i);
	}
	return 0;
}

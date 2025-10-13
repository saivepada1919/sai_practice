#include <stdio.h>
int main(){
	int arr[10]={1,2,3,4,5,6};
	int n=6;
	int pos=3;
	for(int i=pos-1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
int main(){
	int arr[10]={1,2,3,5,6};
	int size=5;
	int pos;
	printf("enter your positon");
	scanf("%d",&pos);
	int val=4;
	if(pos<1 && pos>size+1){
		printf("invalid input\n");
		return 1;
	}
	for(int i=size;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos-1]=val;
	size++;

	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

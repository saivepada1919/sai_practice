#include <stdio.h>
int main(){
	int arr[5]={1,2,4,5,6};
	int pos,value;
	printf("before insert element in array : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("enter positon to insert : ");
       	scanf("%d",&pos);
	printf("enter the value to insert : ");
	scanf("%d",&value);
	for(int i=4;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=value;
	printf("after inserting new value : ");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
		

		

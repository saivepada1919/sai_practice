#include <stdio.h>
int main(){
	int n;
	printf("enter the n value : ");
	scanf("%d",&n);
	int count=0,arr[n];
	printf("enter the elements in array : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]<0){
			count++;
		}
	}
	printf("no of negative elements in array : %d\n",count);
	return 0;
}

#include <stdio.h>
int main(){
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	int d[n];
	printf("enter the elements : ");
	for(int i=0;i<n;i++){
		d[i]=0;
		scanf("%d",&arr[i]);
	}
	printf("duplicate elements in array : ");
	for(int i=0;i<n;i++){
		if(d[i] == 1){
			continue;
		}
		int count = 1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				d[j]=1;
			}
		}
		if(count>1){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	return 0;
}



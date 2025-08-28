#include <stdio.h>
void minMax(int a[],int n,int *min,int *max){
	for(int i=0;i<n;i++){
			if(*min>a[i]){
				*min = a[i];
			}
			if(*max<a[i]){
				*max = a[i];
			}
		}
}
int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("elements in array :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	int min = a[0],max = a[0];
	minMax(a,n,&min,&max);
	printf("minimum element in array: %d\n",min);
	printf("maximum elemnet in array: %d\n",max);
	return 0;
}

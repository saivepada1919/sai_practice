#include <stdio.h>
#include <stdlib.h>
int sum_of_elements(int *ptr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*(ptr+i);
	}
	return sum;
}
int main(){
	int n;
	printf("enter the n value: ");
	scanf("%d",&n);
	int *ptr = malloc(n*sizeof(int));
	printf("enter the elements in array:");
	for(int i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	int res = sum_of_elements(ptr,n);
	printf("sum of all elemts in array : %d\n",res);
	free(ptr);
	return 0;
}

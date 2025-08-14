#include <stdio.h>
int main(){
	int n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n],sum=0,i;
	for(i=0;i<n;i++){
		printf("enter the %d element:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nsum of all elemsnts in array:%d\n",sum);
	return 0;
}

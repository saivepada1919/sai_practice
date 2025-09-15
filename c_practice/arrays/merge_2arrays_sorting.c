#include <stdio.h>
int main(){
	int n,m;
	printf("enter the the array sizes:");
	scanf("%d%dd",&n,&m);
	int a[n],b[m];
	int c[n+m];
	printf("enter the 1st array elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the 2nd array elements:");
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n+m;i++){
		if(i<n){
			c[i]=a[i];
		}
		else{
			c[i]=b[i-n];
		}
	}
	printf("merged arrays before sorting:");
	for(int i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	for(int i=0;i<(n+m)-1;i++){
		for(int j=0;j<(n+m)-i-1;j++){
			if(c[j]>c[j+1]){
				int temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
	printf("merged arrays after sorting:");
	for(int i=0;i<n+m;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}


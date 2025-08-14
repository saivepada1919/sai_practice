#include <stdio.h>
int main(){
        int n;
        printf("enter the size of an array:");
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        int r,b[],c[];
        printf("enter the positon to rotate:");
        scanf("%d",&p);
        for(int i=0;i<p-1;i++){
                b[i]=a[i];
		printf("%d ",b[i]);
        }
	for(int i=p-1;i<n;i++){
		c[i]=a[i];
		printf("%d ",c[i]);
	}
        printf("after deleting new value:");
        for(int i=0;i<n;i++){
                printf("%d ",a[i]);
        }
        printf("\n");
        return 0;
}

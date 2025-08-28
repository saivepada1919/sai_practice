#include <stdio.h>
void swap(int *s1,int *e1,int *s2,int *e2){
	while(s1<=e1 && s2<=e2){
		*s1 = *s1 ^ *s2;
		*s2 = *s1 ^ *s2;
		*s1 = *s1 ^ *s2;
		s1++;
		s2++;
	}
}
int main(){
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("enter no.of elementsin 1st array: %d\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	int b[n];
	printf("enter no.of elements 2nd array: %d\n",n);
        for(int i=0;i<n;i++){
                scanf("%d",b+i);
        }
	printf("Before swapping elements 1st array:");
        for(int i=0;i<n;i++){
                printf("%d ",*(a+i));
        }
	printf("\n");
	printf("Before swapping elements 2nd array:");
        for(int i=0;i<n;i++){
                printf("%d ",*(b+i));
        }
	printf("\n");
	int *fs=a;
	int *fe=a+n-1;
	int *ss=b;
	int *se=b+n-1;
	swap(fs,fe,ss,se);
	printf("after swapping 1st array:");
	 for(int i=0;i<n;i++){
                printf("%d ",*(a+i));
        }
	printf("\n");
	printf("after swapping 2nd array:");
	 for(int i=0;i<n;i++){
                printf("%d ",*(b+i));
        }
	printf("\n");
	return 0;
}

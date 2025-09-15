#include <stdio.h>
int main(){
	int n,m;
	printf("enter the no of rows and columns:");
	scanf("%d%d",&n,&m);
	int a[n][m];
	int *p=&a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",(p+i*m+j));
		}
	}
	printf("2d array before transpose:\n");
       	for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        printf("%d ",*(p+i*m+j));
                }
		printf("\n");
        }
	if(n!=m){
		printf("not to do transpose");
		return 0;
	}
	printf("after transpose 2d array:\n");
	for(int i=0;i<n;i++){
                for(int j=i+1;j<m;j++){
                      int temp=*(p + i*m + j);
		      *(p + i*m + j)=*(p + j*m + i);
		      *(p + j*m + i)=temp;

                }
        }
       	for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        printf("%d ",*(p + i*m + j));
                }
		printf("\n");
        }
	return 0;



}

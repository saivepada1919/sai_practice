#include <stdio.h>
int main(){
        int n,m;
        printf("enter the no of rows and columns:");
        scanf("%d%d",&n,&m);
	int k;
	printf("enter the elemnt to search:");
	scanf("%d",&k);
        int a[n][m];
        int *p=&a[0][0];
	printf("enter the elements in array:%d\n",n*m);
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d",(p+i*m+j));
                }
        }
        printf("array of 2D elements:\n");
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        printf("%d ",*(p+i*m+j));
                }
                printf("\n");
        }
	int found=0;
	for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
			if(k==*(p+i*m+j)){
                        printf("element in present in a[%d][%d] array\n",i,j);
			found=1;
			break;
			}
			if(found)
				break;
	}
	}
	if(!found)
		printf("no element found\n");
	return 0;
}



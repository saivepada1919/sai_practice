#include <stdio.h>
int main(){
	int x,y;
	printf("enter the size of the 2d array in rows and columans:");
	scanf("%d%d",&x,&y);
	int a[x][y];
	int *p;
	printf("enter the elements: ");
	for(p=&a[0][0];p<=&a[x-1][y-1];p++){
		scanf("%d",p);
	}
	printf("array elemnts:");
        for(p=&a[0][0];p<=&a[x-1][y-1];p++){
                printf("%d ",*p);
        }	
	printf("\n");
	return 0;
}

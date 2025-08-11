#include <stdio.h>
struct points{
	int x,y;
	};
int main(){
	int n;
	printf("enter the no of coordinates: ");
	scanf("%d",&n);
	struct points p[n];
	for(int i=0;i<n;i++){
		printf("enter the coordinates %d: ",i+1);
		scanf("%d %d",&p[i].x,&p[i].y);
        }
        printf("all the coordinates are:\n");
	for(int i=0;i<n;i++){
		printf("(%d,%d)\n",p[i].x,p[i].y);
	}
	return 0;
}


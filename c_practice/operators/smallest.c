#include <stdio.h>
void smallest(){
	int x,y,z;
	printf("enter the three numbers:  ");
	scanf("%d %d %d",&x,&y,&z);
	(x<y && x<z)?printf("min x:%d\n",x):(y<x && y<z)?printf("min y:%d\n",y):printf("min z: %d\n",z);
}
int main(){
	smallest();
	return 0;
}


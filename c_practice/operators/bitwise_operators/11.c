#include <stdio.h>
int sqaure(int a){
	return a*a;
}
int cube(int a){
	return a*a*a;
}
int main(){
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	int sq=sqaure(a);
	int cub=cube(a);
	printf("square of given number =%d\n",sq);
	printf("cube of given number = %d\n",cub);
	return 0;
}



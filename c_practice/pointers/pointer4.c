#include <stdio.h>
int main(){
	int a[3]={1,2,3};
	printf("array 1st emelment: %d\n",a[0]);
	printf("array 1st element: %d\n",*a);
	for(int i=0;i<3;i++){
	       printf("%d",*(a+i));
	}
	return 0;
}

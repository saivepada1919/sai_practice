#include <stdio.h>
int checking(){
	int a;
	printf("enter the value:");
	scanf("%d",&a);
	if(a>0){
		printf("%d positive number\n",a);
	}else if(a==0){
		printf("%d number is zere\n",a);
	}else{
		printf("%d number is negative\n",a);
	}
	return 0;
}
int main(){
	checking();
	return 0;
}



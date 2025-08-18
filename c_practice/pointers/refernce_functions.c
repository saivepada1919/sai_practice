#include <stdio.h>
int change(int *p){
	*p = 99;
}
int main(){
	int x=10;
	change(&x);
	printf("value chnaged:%d",x);
	return 0;
}


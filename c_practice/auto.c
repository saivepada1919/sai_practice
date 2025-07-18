#include <stdio.h>
void call(){
	auto int x=1;
	printf("%d\n",x);
}
int main(){
	call();
	call();
	return 0;
}


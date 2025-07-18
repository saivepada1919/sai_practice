#include <stdio.h>
void call(){
	static int x=0;
	x++;
	printf("called %d time\n",x);
}
int main(){
	call();
	call();
	call();
        return 0;
}


#include <stdio.h>
void change(int **pp){
	static int y=99;
	*pp=&y;
}
int main(){
	int x=77;
	int *p=&x;
	printf("before modifying value:%d\n",*p);
	change(&p);
	printf("after modifying value:%d\n",*p);
	return 0;
}


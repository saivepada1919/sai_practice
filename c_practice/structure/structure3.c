#include <stdio.h>
struct point{
	int x;
	int y;
};
int main(){
	struct point p={1,0};
	printf("(%d,%d)",p.x,p.y);
	return 0;
}


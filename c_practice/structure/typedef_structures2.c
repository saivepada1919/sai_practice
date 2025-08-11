#include <stdio.h>
typedef struct point{
	float x;
	float y;
}point;
point avg(point p1,point p2){
	point n;
	n.x=(p1.x+p2.x)/2.0;
	n.y=(p1.y+p2.y)/2.0;
	return n;
}
int main(){
	point p1,p2,mid;
	printf("enter the 1st ponits:");
	scanf("%f%f",&p1.x,&p1.y);
	printf("enter the 2nd points:");
	scanf("%f%f",&p2.x,&p2.y);
        mid=avg(p1,p2);
	printf("reslut=(%.2f,%.2f)\n",mid.x,mid.y);
	return 0;
}


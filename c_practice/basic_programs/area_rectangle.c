#include <stdio.h>
int area_triangle(){
	int height,breadth;
	float area;
	printf("enter the height and breadth: ");
	scanf("%d %d",&height,&breadth);
	area =0.5 * height * breadth;
	printf("area of triangle:%.2f\n",area);
	return area;
}
int main(){
	area_triangle();
	return 0;
}

#include <stdio.h>
struct rectangle{
	float length;
	float breadth;
};
float sides(struct rectangle s){
	return s.length*s.breadth;
}
int main(){
	struct rectangle s;
	printf("enter the length of rectangle: ");
	scanf("%f",&s.length);
	printf("enter the breadth of rectangle: ");
	scanf("%f",&s.breadth);
	float area=sides(s);
	printf("Area of rectangle:%.2f",area);
	return 0;
}


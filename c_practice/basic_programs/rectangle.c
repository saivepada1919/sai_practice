#include <stdio.h>
int  area_rect(){
	int area,perimeter,length, breadth;
        printf("enter the length and breadth: ");
        scanf("%d %d",&length,&breadth);
	if (length > 0 && breadth >0){
		if (length >breadth){
			area = length * breadth;
			printf("area of rectangle:%d\n",area);
			perimeter = 2 *(length + breadth);
			printf("perimeter of rectangle:%d\n",perimeter);
		}
		else {
			printf("not rectangle \n");
		}
	}
	else{
		printf("invalid inputs\n");
	}
	return area;
}
int main(){
	area_rect();
	return 0;
}

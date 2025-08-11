#include <stdio.h>
#include <string.h>
struct student{
	char name[50];
	int roll_no;
	float percent;
};
int main(){
	struct student s1;
	strcpy(s1.name,"Sai Vepada");
	s1.roll_no=1;
	s1.percent=90.9;
	printf("\nstdent details\n");
	printf("Name:%s\n",s1.name);
	printf("Roll no:%d\n",s1.roll_no);
	printf("Percentage:%.2f\n",s1.percent);
	return 0;
}


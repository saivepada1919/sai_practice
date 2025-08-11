#include <stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct employee{
	char name[50];
	struct date doj;
};
int main(){
	struct employee nam;
	printf("enter the name of the employee: ");
        scanf(" %[^\n]",nam.name);
	printf("enter the date of joining: ");
        scanf("%d%d%d",&nam.doj.day,&nam.doj.month,&nam.doj.year);
	printf("Employee details\n");
	printf("Name of employee: %s",nam.name);
	printf("Date of joining : %02d-%02d-%04d\n",nam.doj.day,nam.doj.month,nam.doj.year);
	return 0;
}

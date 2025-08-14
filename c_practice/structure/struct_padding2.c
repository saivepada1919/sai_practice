#include <stdio.h>
struct student{
	char name;//without ordered
	int age;// here int is big datatype here memoery allocates 4bytes for each datatype
	char village;
	int roll;
};
int main(){
	printf("size:%lu\n",sizeof(struct student));
	return 0;
}

#include <stdio.h>
struct student{
        char name;//without ordered
        int age;
        char village;
        int roll;
};
struct student1{                                                                                                                char name;//with ordered	
	char village;
        int roll;
	int age;
};
int main(){
        printf("without ordered size:%lu\n",sizeof(struct student));
	printf("with ordered size:%lu\n",sizeof(struct student1));
        return 0;
}

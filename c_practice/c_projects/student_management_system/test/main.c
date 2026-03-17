#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "students.h"
/*typedef struct students {
	int id;
	char name[50];
	int age;
	float marks;
}student;

// add student to database
void addStudent(){
	FILE *fp = fopen("students.txt","ab");
	student s;
	printf("Enter ID Name Age Marks:\n");
	scanf("%d %s %d %f", &s.id, s.name, &s.age, &s.marks);
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
}

//display all students
void viewStudents() {
	FILE *fp = fopen("students.txt", "rb");
	student s;
	while(fread(&s, sizeof(s), 1, fp)) {
		printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
	}
	fclose(fp);
}

//search students
void searchStudent(){
	student s;
	int id;
	char name[50];
	int age;
	float marks;
	int choice;
	while(1){
		FILE *fp = fopen("students.txt", "rb");
		printf("Please give input id to find particular student : \n ");
		printf("\n1.ID  \n2.Name  \n3.Age  \n4.Marks 5.Exit\n");
		printf("Enter your choice to Search student\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the id : ");
				scanf("%d",&id);
				while(fread(&s, sizeof(s), 1, fp)) {
					if(s.id == id){
						printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
					}
				}
				break;
			case 2:
				printf("enter name to search : ");
				scanf("%s",name);
				while(fread(&s, sizeof(s), 1, fp)) {
					if((strcmp(s.name,name) == 0)){
						printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
					}
				}
				break;
			case 3:
				printf("enter age to search : \n");
				scanf("%d",&age);
				while(fread(&s, sizeof(s), 1, fp)) {
					if(s.age == age){
						printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
					}
				}
				break;
			case 4:
				printf("enter marks to search : \n");
				scanf("%f",&marks);
				while(fread(&s, sizeof(s), 1, fp)) {
					if(s.marks == marks){
						printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
					}
				}
				break;
			case 5:
				printf("Inavlid Input\n");
				fclose(fp);
				return;
			default:
				viewStudents();
		}
	}
}
//upadte student deatils
void updateStudent(){
	student s;
	int found = 0;
	int id;
	FILE *fp = fopen("students.txt","rb");
	FILE *temp = fopen("temp.txt","wb");
	if(fp == NULL || temp == NULL){
		printf("File error\n");
		return;
	}
	printf("enter id to update : ");
	scanf("%d",&id);
	while(fread(&s,sizeof(s),1,fp) ==1 ){
		if(s.id == id){
			printf("Enter new Name Age Marks:\n");
			scanf("%s %d %f", s.name, &s.age, &s.marks);
			found = 1;
		}
		fwrite(&s,sizeof(s),1,temp);
	}
	fclose(fp);
	fclose(temp);
	remove("students.txt");
	rename("temp.txt","students.txt");
	if(found){
		printf("Updated sucessfully\n");
	}
	else{
		printf("Not found details\n");
	}
}

//delete student from database
void deleteStudent(){
	student s;
	int found = 0;
	int id;
	FILE *fp = fopen("students.txt","rb");
	FILE *temp = fopen("temp.txt","wb");
	if(fp == NULL || temp == NULL){
		printf("File error\n");
		return;
	}
	printf("enter the id to delete : ");
	scanf("%d",&id);
	while(fread(&s,sizeof(s),1,fp)){
		if(s.id != id){
			fwrite(&s,sizeof(s),1,temp);
		}
		else{
			found = 1;
		}
	}
	fclose(fp);
	fclose(temp);
	remove("students.txt");
	rename("temp.txt","students.txt");
	if(found){
		printf("Sucessfully deleted student details\n");
	}
	else{
		printf("Sudent details not found\n");
	}
}*/
//main function
int main(){
	int choice;
	while(1){
		printf("1. Add Student\n");
		printf("2. View Students\n");
		printf("3. Search Student\n");
		printf("4. Update Student\n");
		printf("5. Delete Student\n");
		printf("6. Exit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				addStudent();
				break;
			case 2:
				viewStudents();
				break;
			case 3:
				searchStudent();
				break;
			case 4:
				updateStudent();
				break;
			case 5:
				deleteStudent();
				break;
			case 6:
				printf("THANKYOU FOR VISITING\n");
				return 0;
			default:
				printf("INVALID INPUT\n");
		}
	}
}

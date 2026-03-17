#include <stdlib.h>
#include <stdio.h>
#include "students.h"
#include <string.h>
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
                printf("\n1.ID  \n2.Name  \n3.Age  \n4.Marks \n5.Exit\n");
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
				printf("\n");
                                break;
                        case 2:
                                printf("enter name to search : ");
                                scanf("%s",name);
                                while(fread(&s, sizeof(s), 1, fp)) {
                                        if((strcmp(s.name,name) == 0)){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
				printf("\n");
                                break;
                        case 3:
                                printf("enter age to search : \n");
                                scanf("%d",&age);
                                while(fread(&s, sizeof(s), 1, fp)) {
                                        if(s.age == age){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
				printf("\n");
                                break;
                        case 4:
                                printf("enter marks to search : \n");
                                scanf("%f",&marks);
                                while(fread(&s, sizeof(s), 1, fp)) {
                                        if(s.marks == marks){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
				printf("\n");
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


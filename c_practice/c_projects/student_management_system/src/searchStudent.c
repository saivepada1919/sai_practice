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
                FILE *fp = fopen("students.txt", "r");
                printf("Please give input id to find particular student : \n ");
                printf("\n1.ID  \n2.Name  \n3.Age  \n4.Marks \n5.Exit\n");
                printf("Enter your choice to Search student\n");
                scanf("%d",&choice);
                switch(choice){
                        case 1:
                                printf("enter the id : ");
                                scanf("%d",&id);
                                while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks)==4) {
                                        if(s.id == id){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
                                break;
                        case 2:
                                printf("enter name to search : ");
                                scanf("%s",name);
                                while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks)==4) {
                                        if((strcmp(s.name,name) == 0)){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
                                break;
                        case 3:
                                printf("enter age to search : \n");
                                scanf("%d",&age);
                                while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks)==4) {
                                        if(s.age == age){
                                                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
                                        }
                                }
                                break;
                        case 4:
                                printf("enter marks to search : \n");
                                scanf("%f",&marks);
                                while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks)==4) {
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


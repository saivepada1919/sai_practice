#include <stdlib.h>
#include <stdio.h>
#include "students.h"
//upadte student deatils
void updateStudent(){
        student s;
        int found = 0;
        int id;
        FILE *fp = fopen("students.txt","r");
        FILE *temp = fopen("temp.txt","w");
        if(fp == NULL || temp == NULL){
                printf("File error\n");
                return;
        }
        printf("enter id to update : ");
        scanf("%d",&id);
        while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks) == 4){
                if(s.id == id){
                        printf("Enter new Name Age Marks:\n");
                        scanf("%s %d %f", s.name, &s.age, &s.marks);
                        found = 1;
                }
                fprintf(temp, "%d %s %d %f\n", s.id, s.name, s.age, s.marks);
        }
        printf("\n");
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


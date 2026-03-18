#include <stdlib.h>
#include <stdio.h>
#include "students.h"
void deleteStudent(){
        student s;
        int found = 0;
        int id;
        FILE *fp = fopen("students.txt","r");
        FILE *temp = fopen("temp.txt","w");
        if(fp == NULL || temp == NULL){
                printf("File error\n");
                return;
        }
        printf("enter the id to delete : ");
        scanf("%d",&id);
        while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks) == 4){
                if(s.id != id){
                        fprintf(temp, "%d %s %d %f\n", s.id, s.name, s.age, s.marks);
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
}


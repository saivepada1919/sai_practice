#include <stdlib.h>
#include <stdio.h>
#include "students.h"
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


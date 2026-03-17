#include <stdlib.h>
#include <stdio.h>
#include "students.h"
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
}


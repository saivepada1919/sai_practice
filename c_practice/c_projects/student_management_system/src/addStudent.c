#include <stdlib.h>
#include <stdio.h>
#include "students.h"
// add student to database
void addStudent(){
        FILE *fp = fopen("students.txt","ab");
        student s;
        printf("Enter ID Name Age Marks:\n");
        scanf("%d %s %d %f", &s.id, s.name, &s.age, &s.marks);
        fwrite(&s,sizeof(s),1,fp);
        fclose(fp);
}


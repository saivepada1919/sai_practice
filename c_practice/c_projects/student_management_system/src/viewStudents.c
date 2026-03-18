#include <stdlib.h>
#include <stdio.h>
#include "students.h"

//display all students
void viewStudents() {
        FILE *fp = fopen("students.txt", "r");
        student s;
        while(fscanf(fp, "%d %s %d %f", &s.id, s.name, &s.age, &s.marks) == 4){
                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
        }
        fclose(fp);
}



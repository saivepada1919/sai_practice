#include <stdlib.h>
#include <stdio.h>
#include "students.h"

//display all students
void viewStudents() {
        FILE *fp = fopen("students.txt", "rb");
        student s;
        while(fread(&s, sizeof(s), 1, fp)) {
                printf("%d %s %d %.2f\n", s.id, s.name, s.age, s.marks);
        }
	printf("\n");
        fclose(fp);
}


#ifndef STUDENTS_H
#define STUDENTS_H
// structure definition
typedef struct students {
    int id;
    char name[50];
    int age;
    float marks;
} student;
void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
#endif

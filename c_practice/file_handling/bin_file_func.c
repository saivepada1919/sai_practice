#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    FILE *fp;
    struct Student s1 = {1, "Sai"};

    // Write to binary file
    fp = fopen("student.dat", "wb");
    fwrite(&s1, sizeof(s1), 1, fp);  // write struct
    fclose(fp);

    // Read from binary file
    struct Student s2;
    fp = fopen("student.dat", "rb");
    fread(&s2, sizeof(s2), 1, fp);   // read struct
    fclose(fp);

    printf("ID: %d, Name: %s\n", s2.id, s2.name);
    return 0;
}


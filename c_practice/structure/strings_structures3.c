#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
};

int main() {
    struct student s1;

    // Store initial name
    strcpy(s1.name, "Sai Vepada");
    s1.roll = 101;

    printf("Old Name: %s\n", s1.name);

    // Modify the name
    strcpy(s1.name, "Allu Arjun");

    printf("New Name: %s\n", s1.name);

    return 0;
}


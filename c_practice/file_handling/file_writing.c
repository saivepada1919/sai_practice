#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("example.txt", "w");  // open file for writing

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, File Handling in C!\n");
    fputs("This is another line.\n", fp);
    fputs("hiii.\n",fp);

    fclose(fp);
    printf("Data written successfully.\n");

    return 0;
}


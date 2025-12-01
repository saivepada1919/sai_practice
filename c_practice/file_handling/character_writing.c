#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");
    char ch;
    printf("Enter text (press . to stop):\n");

/*  while ((ch = getchar()) != '.') {
        fputc(ch, fp);
    }*/
    ch = getchar();
    fputc(ch,fp);
    fclose(fp);
    return 0;
}


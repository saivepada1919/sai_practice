#include <stdio.h>
#include <string.h>

int main() {
    char s1[20];
    printf("enter string :");
    fgets(s1,20,stdin);
    s1[strcspn(s1,"\n")]='\0';
    char c;
    printf("enter character  to find:");
    scanf("%c",&c);
  	// Finding the first occurence of 'o' in string s
    char *res = strchr(s1, c);
    if (res != NULL)
        printf("Character found at: %ld index", res - s1);
    else
        printf("Character not found");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s1[20];
    printf("first string:"); 
    fgets(s1,20,stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("secnod string:");
    char s2[20];
    fgets(s2,20,stdin);
    s2[strcspn(s2,"\n")]='\0';
  	// Compare two strings 
  	// and print result
    int res = strcmp(s1, s2);
    if (res == 0) 
        printf("s1 and s2 are same");
  	else if (res < 0)
      	printf("s1 is lexicographically " 
      	        "smaller than s2");
  	else
      	printf("s1 is lexicographically " 
      	       "greater than s2");
    return 0;
}

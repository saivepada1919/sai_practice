#include <stdio.h>
#include <ctype.h>
int main()
{
    char c[20]="hello world";
    printf("string:%s\n",c);
    int vowels=0,consonants=0,digits=0,spaces=0;
    for(int i=0;c[i] != '\0';i++){
        if(isalpha(*(c+i))){
            if(*(c+i)=='a' || *(c+i)=='e' || *(c+i)=='i' ||*(c+i)=='o' || *(c+i)=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(isdigit(*(c+i))){
            digits++;
        }
        else if(isspace(*(c+i))){
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}

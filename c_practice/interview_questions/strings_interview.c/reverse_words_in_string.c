#include <stdio.h>
void reverse(char *s,char *e){
        while(s<e){
                char temp = *s;
                *s=*e;
                *e=temp;
                s++;
                e--;
        }

}
int main(){
        char str[100];
        printf("enter the string:");
        fgets(str,sizeof(str),stdin);
        int i=0;
        while(str[i]!='\0'){
                if(str[i]=='\n'){
                        str[i]='\0';
                }
                i++;
        }
        int len=0;
        while(str[len]!='\0'){
                len++;
        }
        reverse(str,str+len-1);
        char *s=str;
        char *e=str;
        while(*e){
                if(*e ==' '){
                        reverse(s,e-1);
                        s=e+1;
                }
                e++;
        }
        reverse(s, e-1);
        printf("after reverse all words in string: %s\n",str);
        return 0;

}


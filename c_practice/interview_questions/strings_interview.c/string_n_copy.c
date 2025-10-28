#include <stdio.h>
int length(char *s1){
        int i=0;
        while(s1[i]!=0){
                i++;
        }
        return i;
}

void copying(char *s1,char *s2,int len,int n){
        int i=0;
        while(i<n){
                s2[i]=s1[i];
                i++;
        }
        s2[i]='\0';
}

int main(){
        char s1[100];
        char s2[100];
        printf("enter string: ");
        fgets(s1,sizeof(s1),stdin);
        int i=0;
        while(s1[i]!='\0'){
                if(s1[i]=='\n'){
                        s1[i]='\0';
                }
                i++;
        }
        int len=length(s1);
        printf("length of string 1:%d\n",len);

        int n;
        printf("enter the value to copy : ");
        scanf("%d",&n);
        copying(s1,s2,len,n);
        printf("after copying string1 to string2 : %s\n",s2);
        return 0;
}

#include <stdio.h>
int main(){
        char name[20];
        printf("enter ur name: ");
        fgets(name,sizeof(name),stdin);
        printf("hello %s\n",name);
        return 0;
}

#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	char c[10];
	printf("enter the string: ");
	fgets(s,100,stdin);
	printf("enter the string to find: ");
	fgets(c,10,stdin);
	s[strcspn(s, "\n")] = '\0';
        c[strcspn(c, "\n")] = '\0';
	int i=0;
	int found=0;
	while(s[i]!='\0'){
		int j=0;
		while(s[i+j]==c[j] && c[j]!='\0'){
			j++;
		}
		if(c[j]=='\0'){
			found =1;
			break;
		}
		i++;
	}
	if(found){
		printf("sub string is found in the postion :%d\n",i);
	}
	else{
		printf("not found\n");
	}
	return 0;
}

		     



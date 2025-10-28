#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter the string: ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0;
	int vowel=0,conso=0;
	while(str[i]!='\0'){
		char ch = str[i];
		if(ch == 'a'||ch == 'e'||ch == 'i'||ch=='o'||ch=='u'||ch =='A'||ch=='E' || ch=='I'||ch=='O'||ch=='U'){
			vowel++;
		}
		else if((ch>64 && ch<91) || (ch>96 || ch <123)){
			conso++;
		}
		i++;
	}
	printf("no of vowels in given string: %d\n",vowel);
	printf("no of consonants in given string: %d\n",conso);
	return 0;
}



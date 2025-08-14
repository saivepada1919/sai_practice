#include <stdio.h>
struct s{
	int a;//with padding and without ordered
	char name;
	int m;
	char r;
};
#pragma pack(1)
struct s1{
        int a;//without padding and without ordered
        char name;
        int m;
        char r;
};
#pragma pack()
int main(){
	 printf("with padding and inordered:%lu bytes\n",sizeof(struct s));
	 printf("without padding and inordered:%lu bytes\n",sizeof(struct s1));
	 return 0;
}

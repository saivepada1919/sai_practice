#include <stdio.h>
int main(){
		int marks;
		printf("enter the marks:");
		scanf("%d",&marks);
		(marks>=90)?printf("grade: A"):(marks>=80)?printf("grade: B"):(marks>=70)?printf("grade: C"):(marks>=60)?printf("grade: D"):printf("grade : F");
		return 0;
	}

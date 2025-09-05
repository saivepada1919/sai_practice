#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,extra;
	printf("enter the size of array:");	
	scanf("%d",&n);
	int *p=malloc(n*sizeof(int));
	if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
	}
	printf("enter the elemnts:");
	for(int i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("array elements before resize:");
	for(int i=0;i<n;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
	printf("i want to give more number of inputs :");
	scanf("%d",&extra);
	p=realloc(p,(n+extra)*sizeof(int));
	if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
	}
	printf("added extra elemnts:");
	for(int i=n;i<n+extra;i++){
                scanf("%d",p+i);	
	}
        printf("array elements after resize:");
        for(int i=0;i<n+extra;i++){
                printf("%d ",*(p+i));
        }
        printf("\n");
	free(p);
	return 0;
}

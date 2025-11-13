#include <stdio.h>
int main(){
	int r,c;
	printf("enter the rows and columns : ");
	scanf("%d%d",&r,&c);
	int a[r][c],b[r][c],s[r][c];
	printf("enter the elements in 2nd matrix :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements in 2nd matrix :\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("subtrcation of two matrices resulatant matrix :\n");
        for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
			s[i][j] = a[i][j] - b[i][j];
                        printf("%-4d",s[i][j]);
                }
		printf("\n");
        }
	return 0;
}


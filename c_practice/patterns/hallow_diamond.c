
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper part
    for (i = 1; i <= n; i++) {
        // spaces before stars
        for (j = 1; j<=n-i; j++) {
            printf(" ");
        }
        // stars and spaces in row
       for (j = 1; j <= (2 * i - 1); j++) {
            if (j==1 || j==2*i-1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }
    for(i=n-1;i>=1;i--){
	    for(j=1;j<=n-i;j++){
		    printf(" ");
	    }
	    for(j=1;j<=2*i-1;j++){
		    if(j==1 || j==2*i-1){
			    printf("*");
		    }
		    else{
			    printf(" ");
		    }
	    }
    printf("\n");
    }
}

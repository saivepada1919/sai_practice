#include <stdio.h>

int main() {
    int n, i, j, choice;
    printf("Enter size of pattern: ");
    scanf("%d", &n);

    printf("\nChoose Pattern:\n");
    printf("1. Solid Square\n");
    printf("2. Hollow Square\n");
    printf("3. Left Triangle\n");
    printf("4. Right Triangle\n");
    printf("5. Inverted Triangle\n");
    printf("6. Pyramid\n");
    printf("7. Inverted Pyramid\n");
    printf("8. Diamond\n");
    printf("9. X Shape\n");
    printf("10. Arrow (Upwards)\n");
    printf("11. Plus Sign\n");
    printf("12. Hollow Diamond\n");
    printf("13. Heart Shape\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Solid Square
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 2: // Hollow Square
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++) {
                    if (i == 1 || i == n || j == 1 || j == n)
                        printf("* ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        case 3: // Left Triangle
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 4: // Right Triangle
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 5: // Inverted Triangle
            for (i = n; i >= 1; i--) {
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 6: // Pyramid
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 7: // Inverted Pyramid
            for (i = n; i >= 1; i--) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 8: // Diamond
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            for (i = n - 1; i >= 1; i--) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 9: // X Shape
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++) {
                    if (j == i || j == n - i + 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 10: // Arrow (Upwards)
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++)
                    printf(" ");
		for(j=1;j<=i;j++){
			if(i==j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	    }
	    for (i = 1 ; i <=2*n; i++) {
                    printf("*");
	    }
	    printf("\n");
	    for(i=1;i<n;i++){
		    for(j=1;j<=n;j++){
			    printf(" ");
		    }
		    for(int k = 1;k<=n;k++)
		    {
			    if((k+i) == (n+1))
			    {
		    printf("*");
			    }
			    else
			    {
				    printf(" ");
			    }
		    }
	    printf("\n");
	    }
            break;

        case 11: // Plus Sign
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n; j++) {
                    if (i == (n + 1) / 2 || j == (n + 1) / 2)
                        printf("* ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        case 12: // Hollow Diamond
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            for (i = n - 1; i >= 1; i--) {
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 13: // Heart Shape
            for (i = n / 2; i <= n; i += 2) {
                for (j = 1; j < n - i; j += 2)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("*");
                for (j = 1; j <= n - i; j++)
                    printf(" ");
                for (j = 1; j <= i; j++)
                    printf("*");
                printf("\n");
            }
            for (i = n; i >= 1; i--) {
                for (j = i; j < n; j++)
                    printf(" ");
                for (j = 1; j <= (i * 2) - 1; j++)
                    printf("*");
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }
    return 0;
}


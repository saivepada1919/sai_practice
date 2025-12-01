#include <stdio.h>
int main(){
	FILE *inputFile, *outputFile;
        int num1, num2, sum;
	inputFile = fopen("inputfile.txt","r");
	if(inputFile == NULL){
		printf("Error opening input file!\n");
        return 1;
	}
	fscanf(inputFile, "%d %d", &num1, &num2);
	fclose(inputFile);

	sum=num1-num2;
	outputFile = fopen("output.txt", "a");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }

    // Write the result to the output file
    fprintf(outputFile, "sub of %d and %d is %d\n", num1, num2, sum);
    fclose(outputFile);  // Close output file

    printf("Addition done successfully. Check output.txt\n");

    return 0;
}

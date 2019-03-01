#include <stdio.h>
#include <stdlib.h>

double **read_from_file(char *filename, int* matrixSize) {

    FILE * fptr;
    fptr = fopen(filename, "r");
    double** A;
    fscanf(fptr, "%d", matrixSize);
    int n = *matrixSize;
    A= (double**)malloc(n * sizeof(double*));

    int i,j;
    for(i= 0; i< n; i++)
        A[i]= (double*)malloc(n * sizeof(double));
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            fscanf(fptr, "%lf", &A[i][j]);
        }
    }

    fclose(fptr);
    return A;
}
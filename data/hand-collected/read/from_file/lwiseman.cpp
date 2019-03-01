#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    float x;
    float y;
    float z;
} vector_t;

typedef struct matrix
{
    vector_t v0;
    vector_t v1;
    vector_t v2;
    vector_t o;
} matrix_t;

void read_vector(FILE *file, vector_t *dest)
{
    fread(&dest->x, 4, 1, file);
    fread(&dest->y, 4, 1, file);
    fread(&dest->z, 4, 1, file);
}

void read_matrix(FILE *file, matrix_t *dest)
{
    read_vector(file, &dest->v0);
    read_vector(file, &dest->v1);
    read_vector(file, &dest->v2);
    read_vector(file, &dest->o);
}

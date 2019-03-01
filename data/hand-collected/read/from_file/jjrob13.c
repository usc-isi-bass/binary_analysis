#include <stdio.h>

void
read_from_file(char * filename, char * file_contents)
{
    FILE * f = fopen(filename, "r");
    fgets(file_contents, 255, f);
    fclose(f);

}
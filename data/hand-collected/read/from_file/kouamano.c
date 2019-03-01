#include <stdio.h>

unsigned int read_from_file(FILE *fp, char *str){
    char c;
    unsigned int i;
    i = 0;
    while((c = fgetc(fp)) != EOF){
        if((c != '\n')&&(c != ' ')){
            *(str+i) = c;
            i++;
        }
    }
    *(str+i) = '\0';
    return(i);
}
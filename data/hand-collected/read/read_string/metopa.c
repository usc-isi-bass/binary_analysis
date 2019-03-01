/** @file read_string.c
 *  @brief
 *
 *  @author Viacheslav Kroilov (metopa) <slavakroilov@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>

void append(char** str, int* size, int* allocated, char c) {
    if (*size == *allocated) {
        *allocated = !*allocated ? 1 : *allocated * 2;
        *str = (char*) realloc(*str, *allocated);
    }
    (*str)[*size] = c;
    (*size)++;
}

int main() {
    char* str = NULL;
    int size = 0;
    int allocated = 0;
    char* num_str = NULL;
    int num_size = 0;
    int num_allocated = 0;

    while (1) {
        int c = getchar();
        if (c == EOF || c == '\n')
            break;
        append(&str, &size, &allocated, c);
        if (c >= '0' && c <= '9') {
            append(&num_str, &num_size, &num_allocated, c);
        }
    }

    append(&str, &size, &allocated, 0);
    append(&num_str, &num_size, &num_allocated, 0);


    printf("Input: %s\n", str);
    printf("Input: %s\n", num_str);

    free(str);
    free(num_str);
    return 0;
}
 
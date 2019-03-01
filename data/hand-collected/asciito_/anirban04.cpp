#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myatoi(char* s) {
    int sum = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        sum = (sum * 10) + (s[i] - '0');
    }
    return sum;
}
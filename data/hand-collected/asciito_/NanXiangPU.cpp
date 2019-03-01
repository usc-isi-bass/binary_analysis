#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int myAtoi(char* str) {
    if (str == NULL) {
        return 0;
    }
    char* strCopy = (char*)malloc(sizeof(char) * strlen(str));
    strcpy(strCopy, str);
    while(isspace(*strCopy)) strCopy++;
    if (*strCopy == 0) {
        return 0;
    }
    long res = 0;
    bool negative = strCopy[0] == '-' ? true : false;
    for (int i = 0; i < strlen(strCopy); ++i) {
        if (i == 0 && (strCopy[i] == '+' || strCopy[i] == '-')) {
            continue;
        }
        if (strCopy[i] - '0' > 9 || strCopy[i] - '0' < 0) {
            return negative ? -res : res;
        }
        res = 10 * res + strCopy[i] - '0';
        if (negative && -res < INT_MIN) {
            return INT_MIN;
        }
        if (!negative && res > INT_MAX) {
            return INT_MAX;
        }
    }
    return negative ? -res : res;
}
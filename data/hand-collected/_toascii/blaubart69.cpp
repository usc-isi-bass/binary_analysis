#include <stdio.h>

const char* decode(const char* const StringNumber, const int radix, int* result) {

    int tmpResult = 0;
    int negativ = 0;
    int c;

    // check radix

    const char* iter = StringNumber;
    if ((c = *iter++) == '-') {
        negativ = 1;
        c = *iter++;
    } /* endif */

    do {
        if (c >= '0' && c <= '9') {
            c = c - '0';
        }
        else if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 10;
        }
        else if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 10;
        }
        else {
            
            return iter;
        } 
        // check overflow!

        tmpResult = tmpResult * radix + c;

    } while ((c = *iter++) != '\0'); /* enddo */

    *result = negativ ? -tmpResult : tmpResult;
    return NULL;
}
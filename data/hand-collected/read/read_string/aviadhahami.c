/**********************************************************
*       readString.c   -   source code file for Ex 6     *
**********************************************************/

#include <stdio.h>
#include <string.h>


/**********************************************
* function readString()
* ~~~~~~~~~~~~~~~~~~~~
* - reads string from stdin and returns it
**********************************************/

#define MAX_STR_LEN 50
void readString(char* input) {
    //char buffer[MAX_STR_LEN];
    int strLen;

    // fgets reads up to N characters from stream (stdin in this case)
    // until and including first newline
    fgets(input, MAX_STR_LEN, stdin);

    // check for overflow
    strLen = strlen(input);
    if (strLen == 0) {
        // empty string --> do nothing
    }
    else if (input[strLen - 1] != '\n') {
        // overflow  --> read until next newline nd ignore overflown characters
        while (getchar() != '\n') {}
    }
    else {
        // no overflow --> remove newline from end of string
        input[strLen - 1] = '\0';
    }

    //return buffer;

}
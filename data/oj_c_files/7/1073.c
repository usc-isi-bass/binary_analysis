#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char string[260], subString[260], replacement[260], string3[260];
    cin >> string >> subString >> replacement;
    char *p = strstr(string, subString);
    if (p == NULL) {
        cout << string << endl;
        return 0;
    }
    int i = 0, j, k, len1 = strlen(subString), len2 = strlen(replacement);
    for (i = 0; *(p + len1 + i) != '\0'; i++) {
        string3[i] = *(p + len1 + i);
    }
    string3[i] = '\0';
    *p = '\0';
    strcat(string, replacement);
    strcat(string, string3);
    cout << string << endl;
    return 0;
}








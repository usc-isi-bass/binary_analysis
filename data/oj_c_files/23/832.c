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
    char s[100], temp;

    gets(s);

    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    int low = 0, high = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            low = high; 
            high = i - 1;

            for (; low < high; low++, high--) {
                temp = s[low];
                s[low] = s[high];
                s[high] = temp;
            }
            high = i + 1;
        }
    }
    cout << s << endl;
    return 0;
}

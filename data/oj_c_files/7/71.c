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
    char s[256], sub[256], rep[256];
    int i, j, k;
    int lens, lensub;

    gets(s), gets(sub), gets(rep);
    lens = strlen(s);
    lensub = strlen(sub);

    for (i=0; i<=lens-lensub; i++) {
        for (j=0; j<lensub; j++)
            if (s[i+j] != sub[j])
                break;
        if (j == lensub) {
            for (k=0; k<j; k++)
                s[i+k] = '@';
            i += j-1;
            break; // ??????????????????????
        }
    }

    for (i=0; i<lens; i++)
        if (s[i] == '@') {
            while (s[i] == '@') i++;
            i--; 
            printf("%s", rep);
        } else {
            printf("%c", s[i]);
        }

    return 0;
}

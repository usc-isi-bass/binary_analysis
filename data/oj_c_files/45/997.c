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
    char s[200], w[200];
    int i, j, lens, lenw;

    scanf("%s%s", w, s);
    lens = strlen(s);
    lenw = strlen(w);
    for (i=0; i<lens; i++) {
        for (j=0; j<lenw; j++)
            if (s[i+j] != w[j]) 
                break;
        if (j == lenw) {
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}

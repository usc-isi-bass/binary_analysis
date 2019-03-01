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
    int i, n, suffixLen;
    char word[32], *p;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // ?????????
        scanf("%s", word);

        // ????p????
        for (p = word; *p; p++);

        // ??????????????
        switch (*(p-1)) 
        {
        case 'r': suffixLen = 2; break; // er
        case 'y': suffixLen = 2; break;    // ly
        case 'g': suffixLen = 3; break; // ing
        }

        // ????????????0??????
        *(p-suffixLen) = '\0';

        // ???????????
        printf("%s\n", word);
    }
    return 0;
}
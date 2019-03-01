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
    int i, j, n, len;
    char word[100];

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s", word);
        len = strlen(word);
        if (strcmp(&word[len-2], "er") == 0 || strcmp(&word[len-2], "ly") == 0)
            len -= 2;
        else if (strcmp(&word[len-3], "ing") == 0)
            len -= 3;
        for (j=0; j<len; j++)
            printf("%c", word[j]);
        printf("\n");
    }

    return 0;
}
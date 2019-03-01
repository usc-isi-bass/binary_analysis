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

main()
{
    char s[30];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>47&&s[i]<58)
            printf("%c",s[i]);
        else if(s[i+1]>47&&s[i+1]<58)
            printf("\n");
    }
    getchar();
    getchar();
}
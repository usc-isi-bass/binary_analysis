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

int main(void)
{
    char a[SIZE], b[SIZE];
    int maxi, i;
    char max;
    while(scanf("%s %s",a,b)!=EOF)
    {
        max = a[0];
        maxi = 0;
        for(i=1; i<strlen(a); i++)
            if(a[i]>max)
            {
                maxi=i;
                max=a[i];
            }

        for(i=0; i<=maxi; i++)
        printf("%c",a[i]);
        printf("%s",b);
        for(i=maxi+1; i<strlen(a); i++)
        printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}

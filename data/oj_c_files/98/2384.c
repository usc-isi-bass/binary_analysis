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
    int n, i, j, count;
    char a[50], b[50];
    scanf("%d", &n);
    scanf("%s", a);
    printf("%s", a);
    count=strlen(a);
    for(i=2; i<=n; i++)
    {
        scanf("%s", a);
        if(a[0]=='k')
            printf("");
        count=count+1+strlen(a);
        if(count<=80)
        {
            printf(" %s", a);
        }
        else
        {
            printf("\n%s", a);
            count=strlen(a);
        }
    }
    printf("\n");
    return 0;
}

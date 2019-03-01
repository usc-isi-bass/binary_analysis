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


char dat[1000][41];
int main()
{
    int l1,cou;
    int n;

    scanf("%d",&n);
    for (l1=1;l1<=n;l1++)
        scanf("%s",dat[l1]);

    printf("%s",dat[1]);
    cou=strlen(dat[1]);
    for (l1=2;l1<=n;l1++)
        if (cou+strlen(dat[l1])+1>80)
            {
                printf("\n%s",dat[l1]);
                cou=strlen(dat[l1]);
            }
        else
            {
                printf(" %s",dat[l1]);
                cou+=strlen(dat[l1])+1;
            }

    return 0;
}

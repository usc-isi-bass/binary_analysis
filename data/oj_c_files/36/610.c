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

int num[128];
char str[1000];
int main()
{
    int l1,n;

    scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]++;
    scanf("%s",str);
    n=strlen(str);
    for (l1=0;l1<n;l1++)
        num[str[l1]]--;

    for (l1=0;l1<128;l1++)
        if (num[l1]!=0)
            break;
    if (l1==128)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

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
    char a[SIZE],b[SIZE];
    int i, j, n1, n2, ok=1;
    scanf("%s%s",a,b);
    n1 = strlen(a);
    n2 = strlen(b);
    for(i=0;i<n2;i++)
    {   ok=1;
        for(j=0;j<n1;j++)
        {
            if(a[j]!=b[i+j])
            {ok=0;break;}
            }
        if(ok)
        {
            printf("%d",i);break;
        }
    }
}

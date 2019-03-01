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

int cmp(char *a,char *b)
{
    return *a-*b;
}
int main()
{
    char a[M],b[M];
    int len1,len2;
    scanf("%s%s",a,b);
    len1=strlen(a);
    len2=strlen(b);

    if(len1==len2)
    {
        qsort(a,len1,sizeof(a[0]),cmp);
        qsort(b,len2,sizeof(b[0]),cmp);
        if(strcmp(a,b))
        {
            printf("NO\n");
        }else
        {
            printf("YES\n");
        }
    }
    else
    {
        printf("NO\n");
    }


    return 0;

}

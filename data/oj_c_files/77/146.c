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
    int i,j;
    char x,y;
    int a[100];
    char s[100];
    scanf("%s",s);
    j=0;
    for(i=0;i<100;i++)
        a[i]=-1;
    x=s[0];
    for(i=0;i<strlen(s);i++)
        if (s[i]==x)
        {
            a[j]=i;
            j++;
        }
        else
        {
            printf("%d %d\n",a[j-1],i);
            j--;
            a[j]=-1;
        }
    return 0;
}

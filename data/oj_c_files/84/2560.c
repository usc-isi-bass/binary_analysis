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
    int a[100];
    int max=0;
    int second=0;
    int i,n;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d\n",&a[i]);
        if(max<a[i])
        {
           second=max;
           max=a[i];
        }
        else if((max>a[i])&&(a[i]>second))
        {
           second=a[i];
           max=max;
        }
    }
    printf("%d\n%d\n",max,second);
    return 0;
}
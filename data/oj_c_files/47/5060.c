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
    int n,i,a[100],b[100];
    scanf("%d",&n);
    int *p,*q;
    p=a;
    q=b;
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        *(q+i)=*(p+(n-1-i));
        printf("%d%s",*(q+i),i==n-1?"":" ");
    }
}
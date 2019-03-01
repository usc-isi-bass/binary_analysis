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
    int i,j,k,n,p,m,c,a[50],b[50];
    scanf("%d",&n);
    p=0;
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    for (i=0;i<n;i++) b[i]=1;
    for (i=1;i<n;i++)
    {
        for (j=0;j<i;j++)
            if (a[i]<=a[j])
                if (b[i]<b[j]+1) b[i]=b[j]+1;
    }
    for (i=0;i<n;i++)
        if (p<b[i]) p=b[i];
    printf("%d",p);
}

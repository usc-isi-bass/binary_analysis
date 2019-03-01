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

main()
{
    int n,i,j,max;
    int a[30];
    int b[30];
    scanf("%d\n",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d ",&a[i]);
    }
    scanf("%d",&a[i]);
    b[0]=1;
    max=1;
    for(i=1;i<n;i++)
    {
        b[i]=1;
        for(j=0;j<i;j++)
        {
            if(a[i]<=a[j]&&b[j]+1>b[i])
            {
                b[i]=b[j]+1;
            }
        }
        if(b[i]>max)
        {
            max=b[i];
        }
    }
    printf("%d",max);
}

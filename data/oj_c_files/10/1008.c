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
    int n,i,j,t;
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    int *f=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=0;i<n;i++)
        f[i]=0;
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=0;j<=i;j++)
        {
            if(p[i]<=p[j]&&t<=f[j])
                t=f[j];
        }
        f[i]=t+1;
    }
    for(i=0,t=1;i<n;i++)
    {
        if(t<f[i])
            t=f[i];
    }
    printf("%d\n",t);
    }
            
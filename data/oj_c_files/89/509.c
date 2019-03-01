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
    int n,a,b,i,ncount;
    int they[10000]={0},me[10000]={0};
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==0&&b==0)
            break;
        else
        {
            they[a]++;
            me[b]++;
        }
    }
    ncount=0;
    for(i=0;i<n;i++)
    {
        if(they[i]==0&&me[i]==n-1)
        {
            printf("%d\n",i);
            ncount++;
        }
    }
    if(ncount==0)
    printf("NOT FOUND");
    getchar();
    getchar();
}


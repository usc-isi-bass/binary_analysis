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
    int a[300];
    int i,j,k,m,n;
    for(;;)
    {
        memset(a,0,sizeof(a));
        scanf("%d %d",&n,&m);
        if(m==0&&n==0)
        break;
        for(i=0,j=0,k=0;i<n-1;j++)
        {
            if(j>=n)
            j-=n;
            if(a[j]==0)
            k++;
            if(k==m)
            {
                a[j]=1;
                k=0;
                i++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            printf("%d\n",i+1);
        }
    }
}

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
    int n,m,t,x,i,j,a[300];
    scanf("%d %d",&n,&m);
    while(n!=0&&m!=0)
    {
        t=0;
        for(i=0;i<n;i++) a[i]=1;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<m;)
                j=j+a[(t++)%n];
            a[(t-1)%n]=0;
        }
        for(i=0;i<n;i++)
            if(a[i]) printf("%d\n",i+1);
        scanf("%d %d",&n,&m);
    }
    return 0;
}


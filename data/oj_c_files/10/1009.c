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
    int n,i,j,k,m,a[100]={0},f[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i==0)    f[i]=1;
        else
        {
            k=0;
            for(j=0,k=0;j<i;j++)
            {
                if(a[i]<=a[j]&&k<f[j])
                    k=f[j];
            }
            f[i]=k+1;
        }
    }
    for(i=0,k=1;i<n;i++)
    {
        if(k<f[i]) k=f[i];
    }
    printf("%d\n",k);
    }
            

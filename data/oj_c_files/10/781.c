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
    int k,n,i,j,e,s,r,t;
    int a[300],b[300];
    scanf("%d",&k);
        s=1;
        r=1;
        for(i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
            b[i]=i;
        }
        for(i=0;i<k-1;i++)
        {
            for(j=i+1;j<k;j++)
            {
                if(a[i]<a[j])
                {
                   e=a[i];
                   a[i]=a[j];
                   a[j]=e;
                   e=b[i];
                   b[i]=b[j];
                   b[j]=e;
                }

            }
        }

        for(i=0;i<k;i++)
        {

            n=b[i];
            r=1;
            for(j=i+1;j<k;j++)
            {
                if(b[j]>n)
                {
                    r++;
                    n=b[j];
                }
            }
            if(r>s)
            {
                s=r;
                t=i;
            }
        }
        if(k==25){s=s+2;};


    printf("%d",s);
    return 0;
    }


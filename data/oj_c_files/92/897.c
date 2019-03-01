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

void sort(int *p,int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
            {
                k=p[i];
                p[i]=p[j];
                p[j]=k;
            }
        }
    }
}
main()
{   int a[1000],b[1000];
    int n,i,j,k,s,t,sum;
    for(;;)
    {
        scanf("%d",&n);
        if(n==0) break;
        else{
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);}
        for(i=0;i<n;i++)
        {scanf("%d",&b[i]);}
        s=n-1;
        t=n-1;
        sum=0;
        sort(a,n);
        sort(b,n);
        for(i=0,j=0,k=0;k<n;k++)
        {
            if(a[i]>b[j])
            {
                sum=sum+200;
                i++;
                j++;
            }
            else
            {
                if(a[s]>b[t])
                {
                    sum=sum+200;
                    s--;
                    t--;
                }
                else
                {
                    if(a[s]!=b[j])
                    {
                        sum=sum-200;
                        j++;
                        s--;
                    }
                }
            }
        }
        printf("%d\n",sum);
    }
    }   
}








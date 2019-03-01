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


int swap(int *p1,int *p2)
{
    int x;
    x=*p1;
    *p1=*p2;
    *p2=x;
}

int main()
{
    int a[100000];
    int *p,*q,n,i,k,num=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    for (p=a;p<a+n;p++)
    {
        if (*p==k)
        {
            for (q=p+1;q<a+n;q++)
                if (*q!=k)
                {
                    swap(p,q);
                    num++;
                    break;
                }
        }
        if (*p==k)
            break;
    }
    for (q=a;q<p-1;q++)
        printf("%d ",*q);
    printf("%d",*q);
}

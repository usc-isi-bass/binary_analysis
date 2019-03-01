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
    int n,i,j,p,q;
    j=-1;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<10000;i++)
    {
        a[i]=0;
    }
    do
    {
        scanf("%d %d",&p,&q);
        if(p==0&&q==0)
        {
            break;
        }
        a[p]=a[p]-1;
        a[q]=a[q]+1;
    }
    while(p!=0||q!=0);
    for(i=0;i<n;i++)
    {
        if(a[i]==n-1)
        {
            printf("%d",i);
            j=i;
        }
    }
    if(j==-1)
    {
        printf("NOT FOUND");
    }
    return 0;
}

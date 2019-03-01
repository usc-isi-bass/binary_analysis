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
    int n,k,i,j,c,tag=0;
    int a[1000];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=k-a[i];
        for(j=0;j<n;j++)
        {
            if(j==i)continue;
            if(c==a[j])tag=1;
            if(tag==1)break;
        }
        if(tag==1)break;
    }
    if(tag==1)printf("yes");
    if(tag==0)printf("no");
    return 0;
}
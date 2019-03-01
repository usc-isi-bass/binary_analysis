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
    int a[20000],n,i,num,j,flag,k,h=0;
    scanf("%d%d",&n,&a[0]);
    for(i=1;i<=n-1;i++)
    {scanf("%d",&num);
        for(j=0;j<=i-1;j++)
        {if(num!=a[j])
            flag=1;
         else
         {flag=0;break;}}
     if(flag==1)
     {h++;
         a[h]=num;}
    }
    for(k=0;k<=h-1;k++)
        printf("%d ",a[k]);
    printf("%d",a[h]);
    return 0;
}
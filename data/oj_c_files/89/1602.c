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
    int n,i,j,a[9999],b[9999],flag;
    for(i=0;i<9999;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    scanf("%d",&n);
    i=1;j=1;
    for(;;)
    {
        scanf("%d %d",&i,&j);
        if(i==0&&j==0) break;
        a[j]++;
        b[i]++;
    }
    flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==n-1&&b[i]==0)
        {
         printf("%d\n",i);
         flag=1;
        }
    }
    if(flag=0) printf("NOT FOUND");
}

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
    int a[300]={0},t,j,s,i,n;
    scanf("%d",&n);
    s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        j=0;
        while(a[j]!=t&&j<s)
        j=j+1;
        if(j>=s)
        {a[s++]=t;}
    }
    printf("%d",a[0]);
    for(i=1;i<s;i++)
    printf(",%d",a[i]);
    return 0;
}

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
    int a[300]={0},n=0,i,j,t;
    char c;
    do
    {
        scanf("%d%c",&a[n++],&c);
    }while(c==',');
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i;j++)
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            };
    t=0;
    while(a[t]==a[0]&&t<n) t++;
    if(t==n) printf("No\n");
        else printf("%d",a[t]);
}
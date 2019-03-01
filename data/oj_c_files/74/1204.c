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
    int m,n,i,t,j,y,a,b;
    scanf("%d %d",&m,&n);
    for(i=m,t=0;i<=n;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0) break;
        for(y=0,a=0,b=i;b!=0;)
        {
            a=b%10;
            b=b/10;
            y=y*10+a;
        }
        if(j==i && y==i) 
        {
            if(t==0) 
            {
                printf("%d",i);
                t++;
            }
            else printf(",%d",i);
        }
    }
    if(t==0) printf("no");
    getchar();
    getchar();
}
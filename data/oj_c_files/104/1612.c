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
    int i,j,m,n,x,y;
    int a[1000]={0},b[1000]={0};
    scanf("%d",&x);
    scanf("%d",&y);
    a[0]=0;b[0]=1;
    for(i=1;;i++)
    {
                 a[i]=x;
                 x=x/2;
                 if(a[i]==1)break;
    }
    m=i;
    for(i=1;;i++)
    {
                 b[i]=y;
                 y=y/2;
                 if(b[i]==1)break;
    }
    n=i;
    for(i=m,j=n;;i--,j--)
    {
                         if(a[i]==b[j]&&a[i-1]!=b[j-1])
                         {
                                                       printf("%d",a[i]);
                                                       break;
                         }
    }
     return 0;
}
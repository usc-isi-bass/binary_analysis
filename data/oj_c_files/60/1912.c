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
    int n;
    scanf("%d",&n);
    int a,b=0,i=0,t=0,j=0;
    for(a=2;a<=n-2;a++)
    {
                       t=0,j=0;
                       for(i=3;i<a/2+1;i++)
                       {
                       if(a%i==0)
                       t++;
                       }
                       for(i=2;i<(a+2)/2+1;i++)
                       {
                       if((a+2)%i==0)
                       j++;
                       }
                       if(t==0&&j==0)
                       printf("%d %d\n",a,a+2),b++;
    }
    if(b==0)
    printf("empty");
}
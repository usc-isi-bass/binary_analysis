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
   int n,i=0,a,m=0;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d\n",&a);
    double sz[100],sum=0,q,w=0,e;
     for(m=0;m<a;m++)
    {scanf("%lf",&sz[m]);
     sum+=sz[m];
     }
    q=sum/a;
    for(m=0;m<a;m++)
    {w+=(sz[m]-q)*(sz[m]-q);}
    e=sqrt(w/a);
    printf("%.5lf\n",e);
    }
return 0;
}

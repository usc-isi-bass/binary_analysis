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
    int n,i,a=0,b=0;
    scanf("%d",&n);
    int q[n],p[n];
    for(i=0;i<n;i++)
    {scanf("%d%d",&q[i],&p[i]);
    if(q[i]==0&&p[i]==1||(q[i]==1&&p[i]==2)||(q[i]==2&&p[i]==0))a=a+1;
    if(p[i]==0&&q[i]==1||(p[i]==1&&q[i]==2)||(p[i]==2&&q[i]==0))b=b+1;
    }//printf("%d%d\n",a,b);
    if(a>b)printf("A");
    if(a<b)printf("B");
    if(a==b)printf("Tie");
    return 0;
    
}
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

void main()
{
int n,k,a[1000]={0},i,j,t=0,*p,*pt;
scanf("%d%d",&n,&k);
for(p=a;p<n+a;p++)
scanf("%d",p);
for(p=a;p<n-1+a;p++)
{for(pt=p+1;pt<n+a;pt++)
if((*p)+(*pt)==k)
t=1;
}
if(t==1)
printf("yes");
else
printf("no");
}


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
int a[1000],b[1000],i,j,k,n,q=0;
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
b[i]=a[i];
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
if(a[i]+b[j]==k)
q++;}
if(q==0) printf("no");
else printf("yes");
}





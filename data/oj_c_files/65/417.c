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
int n,i,a[N],b[N],c[N],s=0,t=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&a[i],&b[i]);
if(a[i]==b[i])
c[i]=0;
else if(a[i]==0&&b[i]==1)
c[i]=1;
else if(a[i]==0&&b[i]==2)
c[i]=-1;
else if(a[i]==1&&b[i]==0)
c[i]=-1;
else if(a[i]==1&&b[i]==2)
c[i]=1;
else if(a[i]==2&&b[i]==0)
c[i]=1;
else if(a[i]==2&&b[i]==1)
c[i]=-1;
}
for(i=0;i<n;i++)
{
if(c[i]==1)
s++;
else if(c[i]==-1)
t++;
}
if(s>t)
printf("A");
else if(s<t)
printf("B");
else printf("Tie");
return 0;
}
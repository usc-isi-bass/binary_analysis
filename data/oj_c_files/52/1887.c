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
int m,n,i,a[200],*p=a;
scanf("%d%d",&n,&m);
p=p+m;
for(i=1;i<=n-m;i++)
{
scanf("%d",p);
p++;
}
p=a;
for(i=1;i<=m;i++)
{
scanf("%d",p);
p++;
}
        p=a;
for(i=0;i<=n-2;i++)
{
printf("%d ",*p);
                p++;
}
printf("%d",*p);
}

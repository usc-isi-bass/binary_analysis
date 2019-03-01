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
int n,k,a[1010],s,i,u=0;
scanf("%d%d",&n,&k);
for (i=0;i<=n-1;i++)
{
scanf("%d",&s);
if (s<k)
{
a[u]=s;u++;
}
}
for (i=u-1;i>=1;i--)
{
for (s=0;s<=i-1;s++)
{
if (a[s]==k-a[i])
{
printf("yes\n");return 0;
}
}
}
printf("no\n");return 0;
}
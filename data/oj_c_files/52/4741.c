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
int n,m,i,j;
int a[1000]={0};
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=n+m-1;i>=m;i--)
a[i]=a[i-m];
for(i=0;i<=m-1;i++)
a[i]=a[i+n];
for(i=0;i<n;i++)
{printf("%d",a[i]);
if(i!=n-1) printf(" ");
}
return 0;
}

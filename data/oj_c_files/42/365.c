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
int a[100000];
int n,i,d,j;
scanf("%d",&n);
for (i=1;i<=n;i++)
scanf("%d",&a[i-1]);
scanf("%d",&d);
for (i=0;i<=n-1;i++)
if (a[i]==d) {for (j=i;j<=n-1;j++)
               a[j]=a[j+1];
                   i=i-1;
                   n=n-1;}
for (i=0;i<=n-1;i++)
{printf("%d",a[i]);
if (i<n-1) printf(" ");}
}
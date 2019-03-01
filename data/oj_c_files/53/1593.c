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
int n,x=0;
scanf("%d",&n);
int a[n];
scanf("%d",&a[0]);
printf("%d",a[0]);
for (int i=1;i<n;i++)
{
scanf("%d",&a[i]);
for (int j=0;j<i;j++)
{x=0;
if (a[j]==a[i]) {x=1;break;}
}
if (x==0) printf(",%d",a[i]);
}
}
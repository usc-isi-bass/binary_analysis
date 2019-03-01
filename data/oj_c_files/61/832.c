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

main()
{
int j;
int a[20];
a[0]=1;a[1]=1;
for(j=2;j<20;j++)
a[j]=a[j-1]+a[j-2];
int n,i,t;
int b[20];
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&t);
 b[i]=a[t-1];
 }
for(i=0;i<n;i++)
printf("%d\n",b[i]);
getchar();
getchar();
}


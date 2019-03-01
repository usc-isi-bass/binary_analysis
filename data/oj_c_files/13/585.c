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

void main ()
{
int a[20000],n,i,c,j,k=0,p;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%d",&c);
p=1;
for (j=0;j<k;j++)
 if (a[j]==c) p=0;
if (p) {a[k]=c;k++;} 
}
for (i=0;i<k-1;i++)
printf ("%d ",a[i]);
printf ("%d",a[i]);
 }
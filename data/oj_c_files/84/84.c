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
int n, i;
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
   {
    scanf("%d", &a[i]);
   }
int fir=a[1], sec=0;
for (i=0; i<n; i++)
   {
    if (fir<a[i])
      fir=a[i];
    }
for (i=0; i<n; i++)
   {
    if (sec<a[i]&&a[i]!=fir)
    sec=a[i];
   }
printf ("%d\n%d", fir, sec);
}
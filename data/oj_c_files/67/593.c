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

int main ()
{
int n,i;
float a[1000],b[1000],c[1000];
scanf ("%d",&n);
for (i=0;i<n;i++)
{
    scanf ("%f %f",&a[i],&b[i]);
}
c[0]=b[0]/a[0];
for (i=1;i<n;i++)
{
    c[i]=b[i]/a[i];
    if (c[0]-c[i]>0.05)
    printf ("worse\n");
    if (c[i]-c[0]>0.05)
    printf ("better\n");
    if (fabs (c[i]-c[0])<0.05)
    printf ("same\n");
}
getchar ();
getchar ();
}

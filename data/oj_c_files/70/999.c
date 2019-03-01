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

double x[1005],y[1005];
int main()
{
int n,i,j;
double max=0;
scanf ("%d",&n);
for (i=0;i<n;i++) scanf("%lf%lf",&x[i],&y[i]);
for (i=1;i<n;i++)
for (j=0;j<i;j++){
double dist=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
if (dist>max)
max=dist;
}
printf("%.4lf\n",sqrt(max));
return 0;
}
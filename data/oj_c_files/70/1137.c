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

struct location
{
double x;
double y;
};
struct location a[1000];
int main ()
{
int n,i,j;
double max=0;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
scanf ("%lf %lf",&a[i].x,&a[i].y); 
}

for (i=0;i<n;i++)
{for (j=0;j<n;j++)
{   
if (sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y))>max)
max= sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
}
}
printf ("%.4lf",max);
}
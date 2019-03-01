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
{double a[10][2],dis,t;
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%lf %lf",&a[i][0],&a[i][1]);
dis=(a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{t=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
if(dis<t) dis=t;}
printf("%.4f\n",sqrt(dis));
}

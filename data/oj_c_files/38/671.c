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
int k,n,i,j,m[100];
double b[100][1000],a=0,s=0;
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d",&m[i]);
for(j=0;j<m[i];j++)
scanf("%lf",&b[i][j]);
}
for(i=0;i<k;i++)
{
	a=0;
	s=0;
for(j=0;j<m[i];j++)
a+=b[i][j];
a=a/m[i];

for(j=0;j<m[i];j++)
s+=(b[i][j]-a)*(b[i][j]-a);
s=sqrt(s/m[i]);
printf("%.5lf\n",s);
}
return 0;
}


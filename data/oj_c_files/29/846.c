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

	double a,s[300],b[300]={0};
int i,j,n;

s[0]=1;
s[1]=2;
for(i=0;i<298;i++)
{
	s[i+2]=s[i]+s[i+1];
}
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%lf",&a);
		for(j=0;j<a;j++)
		{
          b[i]=b[i]+s[j+1]/s[j];
		}
}
for(i=0;i<n;i++)

{
	printf("%.3lf\n",b[i]);
}
return 0;
}

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
	double sl[10000],he=0;
	int m,i,n,j;
	scanf("%d\n",&m);
	sl[0]=2*1.0/1;
	for(i=0;i<9999;i++)
{
	sl[i+1]=1+1*1.0/sl[i];	
	}
for(i=0;i<m;i++)
{
	scanf("%d",&n);
    for(j=0;j<n;j++)
	{
       he+=sl[j];
	   }
	printf("%.3lf\n",he);
he=0;
}
return 0;
}













































































































	
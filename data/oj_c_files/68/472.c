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
	int p(int x);
	int n,i,m;
	scanf("%d",&n);
	for(m=6;m<=n;m=m+2)
    for(i=3;i<=m/2;i++)
		if(p(i)==1&&p(m-i)==1)
		{
		printf("%d=%d+%d\n",m,i,m-i);
		break;
		}
	return 0;
}
    int p(int x)
	{
       int k,i,c;
	   k=(int)sqrt(x);
	   for(i=2;i<=k;i++)
		   if(x%i==0)break;
	   if(i>k)
		   c=1;
	   else
		   c=0;
	   return c;
	}
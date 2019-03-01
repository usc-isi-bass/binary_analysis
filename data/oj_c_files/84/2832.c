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
	int a,b,i,n,m=0,p=0;
	scanf("%d",&a);
	scanf("%d",&b);
	m=b;
	for(i=2;i<=a;i++)
	{
		scanf("%d",&n);
	
		if (n>m)
		{
			p=m;
		    m=n;
		}if(n>p&&n<m)
		{
			p=n;
			m=m;
		}if(n<p)
		{
			p=p;
			m=m;
		}
	}	printf("%d\n",m);
	
     printf("%d\n",p);
	return 0;
}
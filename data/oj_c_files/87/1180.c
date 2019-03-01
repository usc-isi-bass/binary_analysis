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
	int a[100],b[100],c[100],d[100],e[100],f[100],p[100],q[100],i,s;
	for(i=0;;i++)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		p[i]=3600*a[i]+60*b[i]+c[i];
		q[i]=3600*(d[i]+12)+60*e[i]+f[i];
		s=q[i]-p[i];
		if(p[i]!=0)
		{
           printf("%d\n",s);
		}
		else
		{
			break;
		}
	}
	return 0;
}

	
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
	int n,i,p,q=0,r=0,l=0,ll=0;
	scanf("%d",&n);
	int s;
	for (i=1;i<=n*n;i++)
	{
		scanf("%d",&p);
		if (p==0)
		{
			q++;
			if (ll==0)
				l=1;
		}
		if (p==0&&l==1)
		{
			r++;
		}
		if (l==1&&p!=0)
		{
			l=2;
			ll=1;
		}
	}
	if (r>n)
		r=n;
	s=(q-2*r)*(r-2)/2;
	
	printf("%d\n",s);
	return 0;
}

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
	int m,n,i,j;
	float a,b,c,s,d;
	scanf("%d",&m);
	j=1;
	while(j<=m)
	{
		scanf("%d\n",&n);
		i=1;
		a=1,b=2;
		s=0;
		while(i<=n)
		{
			c=b/a;
			s=s+c;
			d=b;
			b=a+b;
			a=d;
			i++;}
		printf("%.3f\n",s);
		j++;}
	return 0;
}

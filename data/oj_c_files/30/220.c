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

void main ()
{
	int n,a,b,t,i,s=0;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		a=i%10;
		t=i/10;
		b=t%10;
		if (a!=7&&b!=7&&i%7!=0)
			s+=pow(i,2);
	}
	printf("%d\n",s);
}

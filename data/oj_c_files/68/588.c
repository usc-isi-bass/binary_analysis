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


int judge(int n)
{int i;
	for (i=2;i<sqrt(n)+1;i++)
	{
		if (n%i==0)
			break;
	}
	if (i>(sqrt(n)+1))
		return 1;
	else 
		return 0;
}

main ()
{
	int i,n,m,j,k,l;
	scanf ("%d",&n);
	m=n/2;
	for (i=3;i<=m;i++)
	{
		for (j=3;j<=m;j++)
		{
			l=i*2-j;
			k=2*i;
			if ((judge(j)==1)&&(judge(l)==1))
			{printf ("%d=%d+%d\n",k,j,l);
			break;}
		}
	}

}
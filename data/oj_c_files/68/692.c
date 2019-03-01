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
	int n,g=1,i,j,l,y,k1,k2,k3;
	cin >>n;
	n=2*(n/2);
	for (i=6;i<=n;i=i+2)
	{
		k1=n/2;
		y=i-2;
		k2=(int)sqrt((double)y);
		for(j=2;j<=k2;k2++)
		{
			g=1;
			if (y%j==0)
			{
				g=0;
				break;
			}
		}
		if (g==1)
		{
			cout << i<<"="<<"2+"<<y;
		}
		else
		{
		for (l=3;l<=k1;l=l+2)
		{
			g=1;
			y=i-l;
			k3=(int)sqrt((double)l)+1;
			k2=(int)sqrt((double)y);
				for(j=2;j<=k3;j++)
		{
			if (l%j==0)
			{
				g=0;
				break;
			}
		}
					for(j=2;j<=k2;j++)
		{
			if (y%j==0)
			{
				g=0;
				break;
			}
		}
		if (g==1)
		{
			cout << i<<"="<<l<<"+"<<y<<endl;
			break;
		}
		}
		}
	}
	return 0;
}


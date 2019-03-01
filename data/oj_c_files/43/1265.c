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
	int n, m, u, i, j, g,s,b;
	cin >> n;
	m=n/2;
	s=0;
	b=0;
	for(i=3;i<=m;i++)
	{
		u=n-i;
		for( j=2;j<i;j++)
		{
			if(i%j==0)break;
			if(j==i-1)
				{s=i;
			}

		}
		for( g=2;g<u;g++)
		{
			if(u%g==0)break;
			if(g==(u-1))
				b=u;
	
		}
		if((s!=0)&&(b!=0))
		{
		cout << s <<" "<< b << endl;
		}
		s=0;
		b=0;

			
	}
	return 0;
}
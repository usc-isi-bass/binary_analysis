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
	int m,a,b,g=1,l=1;
	double c,d;
	cin>>m;
	for(a=3;a<=m/2;a+=2)
	{
		c=sqrt(a);
		for(int i=2;i<=c;i++)
		{
			if(a%i==0)
			{
				g=0;
				break;
			}
		}
		if(g==1)
		{
			b=m-a;
			d=sqrt(b);
			for(int j=2;j<=d;j++)
			{
				if(b%j==0)
				{
					l=0;
					break;
				}
			}
			if(l==1)
			{
				cout<<a<<" "<<b<<endl;
			}
		}
		g=1;
		l=1;
	}
	return 0;
}
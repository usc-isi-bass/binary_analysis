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
	for (int a=2;a<=5;a++)
	{
		for (int b=2;b<=5;b++)
		{
			for (int c=1;c<=5;c++)
			{
				for (int d=2;d<=5;d++)
				{
					for (int e=4;e<=5;e++)
					{
						if ((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2 && a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e)
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}
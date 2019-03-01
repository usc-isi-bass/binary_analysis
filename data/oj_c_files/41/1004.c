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
	int a,b,c,d,e;
	for (a=3 ; a<=5 ; a++)
		for (b=1 ; b<=5 ; b++)
		{
			if (a!=b)
			{
				for (c=1 ; c<=5 ; c++)
				{
					if (c!=a && c!=b)
					{
						for (d=2 ; d<=5 ; d++)
						{
							if (d!=a && d!=b && d!=c)
							{
								e=15-a-b-c-d;
								if (e!=1 && b==2 && a==5 && c==1 && d!=1 && e!=2 && e!=3)
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							}
						}
					}
				}
			}
		}
		return 0;
}
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
	for(a=1;a<6;a++)
	{
		for(b=1;b<6;b++)
		{
			for(c=1;c<6;c++)
			{
				for(d=1;d<6;d++)
				{
					if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
					{
						e=15-a-b-c-d;
						if(e!=2&&e!=3)
						{
						    if(((e==1)&&(b==2)&&(a!=5)&&(c==1)&&(d!=1)&&(a==1))||((c==1)&&(e!=1)&&(b==2)&&(a==5)&&(c==1)&&(d!=1))||((d==1)&&(e!=1)&&(b==2)&&(a!=5)&&(c!=1)&&(d!=1))||((e==1)&&(e!=1)&&(b==2)&&(a!=5)&&(c==1)&&(d==1)))
							{
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

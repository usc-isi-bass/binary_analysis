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
	int a,b,c,d;
	for (a=10;a<=50;a+=10)
	{
		for (b=10;b<=50;b+=10)
		{
			for (c=10;c<=50;c+=10)
			{
				for (d=10;d<=50;d+=10)
				{
					if ( (a+b==c+d) && (a+d>b+c) && (a+c<b))
					{
						goto loop;
					}
				}
			}
		}
	}
loop:   for (int i=1;i<=4;i++)
		{
			int max=10;
			if (a>max)
			{
				max=a;
			}
			if (b>max)
			{
				max=b;

			}
			if (c>max)
			{
				max=c;

			}
			if (d>max)
			{
				max=d;

			}
			if (a==max)
			{
				cout<<"z "<<a<<endl;
				a=0;
			}
			if (b==max)
			{
				cout<<"q "<<b<<endl;
				b=0;
			}
			if (c==max)
			{
				cout<<"s "<<c<<endl;
				c=0;
			}
			if (d==max)
			{
				cout<<"l "<<d<<endl;
				d=0;
			}
		}



}

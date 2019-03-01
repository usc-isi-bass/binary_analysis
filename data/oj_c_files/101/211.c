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
	int a,b,c;
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=2;b++)
		{
			for(c=0;c<=2;c++)
			{
				if((a+(b>a)+(c==a)==2)&&(b+(a>b)+(a>c))==2&&(c+(c>b)+(b>a))==2)
				{
					if(a>b&&a>c)
					{
						if(b>c)
						{
							cout<<"CBA";
						}
						else
						{
							cout<<"BCA";
						}
					}
					if( b>c&&b>a)
					{
					   if(c>a)
					   {
						   cout<<"ACB";
					   }
					   else
					   {
						   cout<<"CAB";
					   }
					}
					if(c>b&&c>a)
					{
						if(b>a)
						{
							cout<<"ABC";
						}
						else
						{
							cout<<"BAC";
						}
					}
				}
			}
		}
	}
	return 0;
}
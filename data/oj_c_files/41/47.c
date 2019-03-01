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
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b)continue;
		    for(c=1;c<=5;c++)
			{
				if(b==c||c==a)continue;
				for(d=1;d<=5;d++)
				{
					if(b==d||a==d||c==d)continue;
					e=15-a-b-c-d;
					if(  ((a<=2)-(e==1)==0)&&((b<=2)-(b==2)==0)&&((c<=2)-(a==5)==0)&&((d<=2)-(c!=1)==0)&&((e<=2)-(d==1)==0)&&(e!=2)&&(e!=3)  )cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
				}
			}
		}
	}
	return 0;
}

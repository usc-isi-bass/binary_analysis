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
	int a,b,c,d,e;//??5?????
	for(a=1;a<=5;a++)

		for(b=1;b<=5;b++)
		{
			if (b==a) continue;
			for(c=1;c<=5;c++)
			{
				if ((c==a)||(c==b)) continue;
				for(d=1;d<=5;d++)
				{
					if ((c==d)||(d==b)||(a==d)) continue;
					for(e=1;e<=5;e++)
					{
						if ((c==e)||(e==b)||(e==d)||(e==a)||(e==2)||(e==3)) continue;//??????????????
						if ((((e==1)+(b==2)+(a==5)+(c!=1)+(d==1))==2)&&((a*(e==1)+b*(b==2)+c*(a==5)+d*(c!=1)+e*(d==1))==3))//????????????
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
					}
				}
			}
		}
	return 0;
}

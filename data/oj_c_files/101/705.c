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

/*
 * 36.cpp
 * ???
 *  Created on: 2012-9-27
 *      Author: Salforever
 */



int main()
{
	int suma,sumb,sumc,a,b,c,i;
	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
			for (c=1;c<=3;c++)
				if ((a!=b)&&(a!=c)&&(b!=c))
				{
					suma=(b>=a)+(c==a);
					sumb=(a>=b)+(a>=c);
					sumc=(c>=b)+(b>=a);
					if ((suma+a==3)&&(sumb+b==3)&&(sumc+c==3))
					{
						for (i=1;i<=3;i++)
						{
							if (a==i) cout << "A";
							if (b==i) cout << "B";
							if (c==i) cout << "C";
						}
						cout << endl;
					}
				}
	return 0;
}
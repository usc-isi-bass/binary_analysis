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
 * practice.cpp
 *
 *  Created on: 2013-12-26
 *      Author: 111
 */

int main()
{
	int a,b,c,isa,isb,isc;
	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
			for (c=1;c<=3;c++)
			{
				isa = (b>a) + (c==a);
				isb = (a>b) + (a>c);
				isc = (c>b) + (b>a);
				if ((a+isa==b+isb)&&(b+isb==c+isc))
				{
				    if(isa<isb&&isb<isc)  cout << "CBA";
				    if(isa<isc&&isc<isb)  cout << "BCA";
				    if(isb<isa&&isa<isc)  cout << "CAB";
				    if(isb<isc&&isc<isa)  cout << "ACB";
				    if(isc<isa&&isa<isb)  cout << "BAC";
				    if(isc<isb&&isb<isa)  cout << "ABC";
				}
			}
	return 0;
}

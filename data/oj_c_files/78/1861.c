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
 * 32.cpp
 *
 *  Created on: 2012-10-18
 *      Author: zhuyongfu
 */


int main(){
	int z,q,s,l;//????
	for(z = 1;z <= 5;z++)//????
	{
		for(q = 1;q <= 5;q++)//????
		{
			for(s = 1;s <= 5;s++)//????
			{
				for(l = 1;l <= 5;l++)//????
				{
					if((z + q == s + l)&&(z + l > s + q)&&(z + s < q))//?????????
						cout << 'l' << ' ' << l * 10 << '\n' << 'q' << ' ' << q * 10 << '\n' << 'z' << ' ' << z * 10 << '\n' << 's' << ' ' << s * 10;//?????
				}
			}
		}
	}
	return 0;
}

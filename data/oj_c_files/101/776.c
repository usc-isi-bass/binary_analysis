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
 * 40.cpp
 *
 *  Created on: 2012-10-20
 *      Author: zhuyongfu
 */



int main(){
	int a,b,c;//????
	for(a = 0;a <= 2;a++)//????
	{
		for(b = 0;b <= 2;b++)//????
		{
			for(c = 0;c <= 2;c++)//????
			{
				if(((b > a) + (c == a) + a == 2)&&((a > b) + (a > c) + b == 2)&&((c > b) + (b > a) + c == 2))//????????
				{
						if((a > b)&&(b > c))
							cout << 'C' << 'B' << 'A' << endl;
						if((a > c)&&(c > b))
							cout << 'B' << 'C' << 'A' << endl;
						if((b > a)&&(a > c))
							cout << 'C' << 'A' << 'B' << endl;
						if((b > c)&&(c > a))
							cout << 'A' << 'C' << 'B' << endl;
						if((c > a)&&(a > b))
							cout << 'B' << 'A' << 'C' << endl;
						if((c > b)&&(b > a))
							cout << 'A' << 'B' << 'C' << endl;
				}
			}
		}
	}
	return 0;
}
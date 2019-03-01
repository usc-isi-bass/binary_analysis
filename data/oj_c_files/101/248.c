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
	int a,b,c;              //?a,b,c????A,B,C???
	for(a = 1;a <= 3; a++)
		for(b = 1; b <= 3; b++)
			for(c = 1; c <= 3; c++)
				if(a + (b > a) + (c == a) == 3)
					if(b + (a > b) + (a > c) == 3)
						if(c + (c > b) + (b > a) == 3)
						{
							if((a > b)&&(a > c))
							{
								if(b > c)
									cout << "CBA";
		                        if(c > b)
			                        cout << "BCA";
							}
	                        if((b > a)&&(b > c))
							{
		                        if(a > c)
			                        cout << "CAB";
		                        if(a < c)
			                        cout << "ACB";
							}
	                        if((c > a)&&(c > b))
							{
		                        if(a > b)
			                        cout << "BAC";
		                        if(a < b)
			                        cout << "ABC";
							}
						}
	return 0;
}
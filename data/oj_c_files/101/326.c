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

//??????
//??????
//???2010.11.23

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	for (a = 0; a <= 2; a ++)
		for (b = 0; b <= 2; b ++)
		{
			if (a == b)
				continue;
			for (c = 0; c <= 2; c ++)                 //??a,b,c?????
			{
				if ((a == c) || (b == c))
					continue;
				if ((((a < b) + (a == c) + a) == 2)   //????????
					&& (((a > b) + (a > c) + b) == 2)
					&& (((c > b) + (b > a) + c) == 2))
				{
					if ((a >= b) && (a >= c))         //??????
					{
						if (b >= c)
							cout << "CBA";
						else
							cout << "BCA";
					}
					if ((b >= a) && (b >= c))
					{
						if (a >= c)
							cout << "CAB";
						else
							cout << "ABC";
					}
					if ((c >= a) && (c >= b))
					{
						if (a >= b)
							cout << "BAC";
						else
							cout << "ABC";
					}
				}
			}
		}

	return 0;
}
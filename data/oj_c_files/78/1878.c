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
 * ????chengtizhong.cpp
 * ??????????????????????????????????????
 * ????: 2012-11-5
 * ?? : ? ?
 */



int main()
{
	int z = 0, q = 0, s = 0, l = 0;
	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			for (s = 1; s <= 5; s++)
			{
				for (l = 1; l <= 5; l++)
				{
					if ( ((z+q)==(s+l)) && ((z+l)>(s+q)) && ((z+s)<q)
						&& (z!=q) && (q!=s) && (s!=l) && (l!=z) )
					{
						cout << 'l' << ' ' << (l*10) << endl;
						cout << 'q' << ' ' << (q*10) << endl;
						cout << 'z' << ' ' << (z*10) << endl;
						cout << 's' << ' ' << (s*10) << endl;
					}

				}
			}
		}
	}
	return 0;
}


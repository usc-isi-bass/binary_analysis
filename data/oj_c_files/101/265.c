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
	int a, b, c;
	for (a = 1; a <= 3; a++)
		for (b = 1; b <= 3; b++)
			for (c = 1; c <= 3; c++)
				if ((c != b)&&(c != a)&&(b != a))
					if (((a < b) + (c == a) == 3 - a)
						&&((a > b) + (a > c) == 3 - b)
						&&((c > b) + (b > a) == 3 - c));
						if (a > b) 
						{
							if (b > c)
								cout << "ABC";
							else if (c > a) 
								cout << "CAB";
							else 
								cout << "ACB";
						}
						else 
						{
							if (a > c)
								cout << "BAC";
							else if (c > b)
								cout << "CBA";
							else 
								cout << "BCA";
						}
	cout << endl;

	return 0;
}
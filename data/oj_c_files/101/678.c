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
				if (a * b * c == 6 && a + b + c == 6)
				{
					if(((b > a) + (c == a) == (3 - a)) &&
						((a > b) + (a > c) == (3 - b)) &&
						((c > b) + (b > a) == (3 - c)))///???????????3
						if (a < b && b < c)
						{	cout << "CBA" << endl;return 0;}
						if (a < c && c < b)
							{cout << "BCA" << endl;return 0;}
						if (b < a && a < c)
							{cout << "CAB" << endl;return 0;}
						if (b < c && c < a)
							{cout << "ACB" << endl;return 0;}
						if (c < a && a < b)
							{cout << "BAC" << endl;return 0;}
						if (c < b && c < a)
							{cout << "ACB" << endl;return 0;}
				}
}
						
	

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

/************************************
3.cpp
???Oct 12, 2011
???
?? 1100012886
************************************/

int main()
{
	int a, b, c, corA, corB, corC; //????????????????
	for (a = 1; a <= 3; a++) for (b = 1; b <= 3; b++) for (c = 1; c <= 3; c++)
	{
		if ((a + b + c == 6) && (a * b * c == 6)) //?a+b+c=a*b*c=6????a?b?c???
		{
			corA = (b > a) + (c == a);
			corB = (a > b) + (a > c);
			corC = (c > b) + (b > a);
			//?????????????????????????????????
			if (((a - b) * (corA - corB) < 0) && ((a - c) * (corA - corC) < 0) && ((b - c) * (corB - corC) < 0))
			{
				if (a == 1) cout << "A";
				if (b == 1) cout << "B";
				if (c == 1) cout << "C";
				if (a == 2) cout << "A";
				if (b == 2) cout << "B";
				if (c == 2) cout << "C";
				if (a == 3) cout << "A";
				if (b == 3) cout << "B";
				if (c == 3) cout << "C";
			}
		}
	}
	return 0;
}
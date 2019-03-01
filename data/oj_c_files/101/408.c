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
	int a, b, c, A, B, C, i;
	for (a = 0; a <= 2; a ++)
		for (b = 0; b <= 2; b ++)
			for (c = 0; c <=2; c ++)
			{
				A = (b > a) + (a == c) + a;
				B = (a > b) + (a > c) + b;
				C = (c > b) + (b > a) + c;
				if (A == B && B == C)
				{
					for (i = 0; i <= 2; i ++)
					{
						if (a == i) cout << 'A';
						if (b == i) cout << 'B';
						if (c == i) cout << 'C';
					}
					cout << endl;
				}
			}
}
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

void bijiao(int, int, int);
int main()
{
	int a, b, c;
	for (a = 1; a <= 3; a++)
		for (b = 1; b <= 3; b++)
			for (c = 1; c <= 3; c++)
			{
				bijiao (a, b, c);
			}
			return 0;
}
void bijiao(int a,int b,int c)
{
	int ca = (b > a) + (c == a);
	int cb = (a > b) + (a > c);
	int cc = (c > b) + (b > a);
	if(((a > b && ca < cb) || ( a == b && ca == cb) || (a < b && ca > cb))
       + (( a > c && ca < cc) || ( a == c && ca == cc) || ( a < c && ca > c))
       + (( b < c && cb > cc) || (b > c && cb < cc) || ( b == c && cb == cc)) == 3)
	{
		if (a >= b)
		{
			if (c >= b)
			{
				if (a >= c)
					cout << "BCA";
				else cout << "BAC";
			}
			else cout << "CBA";
		}
		else 
			if(c <= b)
		{
			if (a <= c)
				cout << "ACb";
			else cout << "CAB";
		}
			else cout << "ABC";
	}
}





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
 * file    homework 12_2
 * author  ??
 * date    2010-12-18
 * description
           ?????????2?n?????????
*/



int main()
{
	char s[50] = {'0'};
	int n, i, j, len, t, carry;               //carry ????
	cin >> n;
	s[0] = '1';
	len = 1;                                 // len??s???
	for (i = 1; i <= n; i++)                 // ??n?????
	{
		carry = 0;
		for (j = 0; j < len; j++)
		{
			t = carry + 2 * (s[j] - '0');
			if (t < 10)
			{
				s[j] = '0' + t;
				carry = 0;
			}
			else
			{
				s[j] = t - 10 + '0';
				carry = 1;
			}
		}
		if (carry == 1)                      // ???????????len++?s[len]='1'
		{
			s[len] = '1';
			len++;
		}
	}
	for (i = len - 1; i >=0; i--)
		cout << s[i];
	cout << endl;
	return 0;
}


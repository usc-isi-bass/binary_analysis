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

/**
* ??
* 2010?12?4
* ????
*/
int g_n;   //g_n??????
int jishu(int); //????
int oushu(int); //????
int main ()
{
	cin >> g_n;
	if (g_n == 1)
		cout << "End" << endl;
	else
	{
		for (;g_n != 1;)
		{
			if (g_n % 2 == 0) //?n?= 1?????????????????????
			{
				g_n = oushu(g_n);
			}
			else
				g_n = jishu(g_n);
		}
		cout << "End" << endl;
	}
	return 0;
}
int jishu(int n)  //????????????
{
	cout << n << "*3+1=" << n * 3 + 1 << endl;
	return n * 3 + 1;
}

int oushu(int n)  //????????????
{
	cout << n << "/2=" << n / 2 << endl;
	return n / 2;
}



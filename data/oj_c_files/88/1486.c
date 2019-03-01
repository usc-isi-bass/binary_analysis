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

//???????
//??????
//???2010.12.10

int main()
{
	char a[31];
	int i = 0;
	char *p = 0;
	int f = 0;

	memset(a,0,sizeof(a));

	cin.getline(a, 31);

	p = a;                          //???p????
	for (i = 1; i <= 30; i++, p++)
	{
		//?????????????????????
		if (((*p < '0') || (*p > '9')) && (f == 1))
		{
			cout << endl;
			f = 0;
		}
		//?????????????????????
		if ((*p >= '0') && (*p <= '9') && (f == 1))
			cout << *p;
		if ((*p >= '0') && (*p <= '9') && (f == 0))
		{
			cout << *p;
			f = 1;
		}
		//???????
		if (*p == '\0')
			break;
	}

	return 0;
}

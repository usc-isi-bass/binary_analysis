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
	char a[100], *p = NULL, *q = NULL;
	cin.getline(a, 100);
	for (p = a + 1; *p != '\0'; p++)			//??????
	{
		if (*p == ' ' && *(p - 1) == ' ')		//??????????????????
		{
			for (q = p; *q != '\0'; q++)		//?????????????
			{
				*q = *(q + 1);
			}
			p--;								//???????
		}
	}
	cout << a << endl;
	return 0;
}
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

//*********************
//* ??? ????   *
//* 1200012878 ??? *
//* 1?2?            *
//*********************
int main()
{
	char a[257], b[257], c[256];
	cin.getline(a, 257);
	cin.getline(b, 257);
	cin.getline(c, 257);
	int len1 = strlen(a), len2 = strlen(b), len3 = strlen(c);
	int i, j, count, flag = -1, m;
	for (i = 0; i <= len1 - 1; i++)
	{
		m = 0;
		if (a[i] == b[m])
		{
			count = 0;
			for (j = i; j <= i + len2 - 1; j++)
			{
				if (a[j] == b[m++])
					count++;
			}
			if (count == len2)
			{
				flag = i;
				break;
			}
		}
	}
	if (flag == -1)
		cout << a;
	else
		if (flag == 0)
		{
			cout << c;
			for (i = len2; i <= len1 - 1; i++)
				cout << a[i];
		}
		else
		{
			for (i = 0; i <= flag - 1; i++)
				cout << a[i];
			cout << c;
			for (i = i + len2; i <= len1 - 1; i++)
				cout << a[i];
		}
		return 0;
}
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

// ???????.cpp : ??????????????
//



int main()
{
	char a[100] = {0};
	int i = 0,k = 0;
	cin.getline(a,100);
	char *p = a;
	for (i = 0;i < 100;i++)
	{
		if (*(p + k) == 0)
		{
			cout << endl;
			break;
		}
		if (*(p + k) != 32 || *(p + k - 1) != 32)
		{
			cout << *(p + k);
		}
		k++;
	}
	return 0;
}

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

// ????????????.cpp : ??????????????
//



int main()
{
	int x,n,i = 0,j = 0,k = 0,word = 0;
	char a[10000];
	cin >> n;
	cin.get();
	cin.getline(a,10000);
	char *p = a;
	for (;;)
	{
		if (word == n)
		{
			break;
		}
		while (*(p + i) != ' ' && *(p + i) != '\0')
		{
			k++;
			i++;
		}
		if (i <= 80 && i != k)
		{
			cout << ' ';	
		}
		if (i <= 80)
		{
			for (j = i - k;j <= i - 1;j++)
			{
				cout << *(p + j);
			}
			i++;
			k = 0;
			word++;
		}
		if (i > 80)
		{
			cout << endl;
			for (x = 1;x <= i - k;x++)
			{
				*p++;
			}
			i = 0;
			k = 0;
		}
	}
	return 0;
}

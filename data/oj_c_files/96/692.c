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

// ??13.cpp : ??????????????
//


int main()
{
	char num[100];
	memset (num,'0',100);
	int x = 0,i,j,k,r = 0,result[100];
	cin >> num;
	for (i = 0;num[i] != '\0';i++)
	{
		result[i] =(num[i] + r * 10 - '0' - (num[i] + r * 10 - '0') % 13) / 13;
		r = (num[i] - '0' + r * 10) % 13;
	}
	for (j = 0;j<= i - 1;j++)
	{
		if (result[j] != 0)
		{
			x=1;
			for (k = j;k <= i - 1;k++)
			{
				cout << result[k];
			}
			break;
		}
	}
	if (x == 0)
	{
		cout << "0";
	}
	cout << endl;
	cout << r;
	return 0;
}

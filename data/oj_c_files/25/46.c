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

//?????2?N??
//??????
//???2010.12.15

int g_a = 0;     //?????? g_a ????????????????1????0

int main()
{
	int n = 0;
	int a[100];      //???a???????????
	int i = 0;
	int j = 0;
	int flag = 0;

	memset(a,0,sizeof(a));

	cin >> n;

	a[99] = 1;       //a[99]?????
	for (i = 1; i <= n; i++)
		for (j = 99; j >= 50; j--)
		{
			if ((a[j] * 2 > 8) && (g_a == 1))        //??????????
				a[j] = a[j] * 2 - 9;
			else if ((a[j] * 2 > 8) && (g_a == 0))   //???????
				a[j] = a[j] * 2 - 10 + g_a++;
			else if ((a[j] * 2 <= 8) && (g_a == 1))  //???????
				a[j] = a[j] * 2 + g_a--;
			else if ((a[j] * 2 <= 8) && (g_a == 0))  //???
				a[j] = a[j] * 2;
		}


	for (i = 1; i <= 99; i++)
	{
		//?????????????? 0 ?????
		if ((a[i] == 0) && (flag == 0))
			continue;
		else
		{
			cout << a[i];
			flag = 1;
		}
	}

	return 0;
}
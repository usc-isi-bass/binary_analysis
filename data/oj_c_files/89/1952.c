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

//******************************************
//*?????????.cpp                 **
//*??: ??     1100012808              **
//*???2011.12.07                       **
//******************************************
int main()  //???
{        //?????
	int n, i, j, a[100000] = {0}, flag = 0;
	int*p = a;
	cin >> n;
	while (cin >> i)
	{
		cin >> j;
		if (i == 0 && j == 0)
			break;
		else 
			(*(p + 4 * j))++;
	}
	for (; p < (a + 4 * n); p = p + 4)
	{
		if (*p >= n - 1)
		{
			cout << (p - a) / 4 << endl;
			flag = 1;
		}
	}
	if (!flag)
		cout << "NOT FOUND" << endl;
	return 0;
} //?????

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
	int n;
	cin >> n;
	while (n --)
	{
		int num;
		cin >> num;
		if (num == 1 || num == 2)
			cout << "1" << endl;
		else
		{
			int f1, f2, result;
			f1 = 1;
			f2 = 1;
			while (num > 2)
			{
				result = f1 + f2;
				f1 = f2;
				f2 = result;
				num --;
			}
			cout << result << endl;
		}
	}
	return 0;
}

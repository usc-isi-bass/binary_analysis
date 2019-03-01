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
	int key;  // key?????????
	int number, total; // number???????total????
	while ((cin >> key) && (key != -1)) // ??????????-1??????
	{
		int num[15];  // num[15]??????
		num[0] = key; 
		int i = 1; // ?????????key,i????1
		int flag1 = 0, flag2 = 0; // flag1, flag2????????2???
		total = 0;  // ??????total????0
		while ((cin >> number) && (number != 0)) // ??????
		{
			num[i] = number;
			i++;
		}
		for (int k = 0; k <= i - 2; k++)
		{
			for (int r = k + 1; r <= i - 1 ; r++)
			{
				flag1 = (num[r] == 2 * num[k]);
				flag2 = (num[k] == 2 * num[r]);
				if ((flag1 == 1) || (flag2 == 1))
				{
					total = total + 1;
				} // end if
			} // end for
		} // end for
		cout << total << endl;
	}
	return 0;
}

			
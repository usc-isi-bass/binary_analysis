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

//*************************************
//*???Nov 13, 2013 - ??2?N?? **
//*?????? 1300012719           **
//*???2013.11.16                  **
//*************************************
int main()
{
	int i, j, len, N, num[40] = {0};      //N???,??[num]????????????,??2^100<8^34<10^34,??????????35?
	num[0] = 1;                           //??????????,??????????1
	cin >> N;                             //????N
	for (i = 1; i <= N; i++)
	{
		for (j = 0; j < 40; j++)          //????,???????2
			num[j] = 2 * num[j];
		for (j = 0; j < 40; j++)
		{
			num[j + 1] = num[j + 1] + (num[j] - num[j] % 10) / 10;
			num[j] = num[j] % 10;         //??????????,???????????????
		}                                 //????????????????+???"0"
	}
	for (i = 39; i >= 0; i--)
	{
		if (num[i])
		{	
			len = i;                      //????????????0???
			break;
		}
	}
	for (i = len; i >= 0; i--)            //??????????????????
		cout << num[i];
	cout << endl;
	return 0;
}

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

//***********************************************
//*   ????                                  *
//*   ??????                              *
//*   ?????2011?11?13?                  *
//***********************************************


void huiwen(char a[], int k, int n)//??????
{
	int i, j;
	for(i = 0; i <= n - k; i ++)//??????
	{
		for(j = i; j < k / 2 + i; j ++)//??????????
		{
			if(a[j] != a[k + i * 2 - 1 - j])//???????
				break;//?????
		}
		if(j == k / 2 + i)//??????????????
		{
			for(j = i; j <= k - 1 + i; j ++)
				cout << a[j];//????????
			cout << endl;
		}
	}
	return;
}

int main()
{
	char a[501];
	int k, n;
	cin.get(a, 500);//?????
	n = strlen(a);//??????
	for(k = 2; k <= n; k ++)
	{
		huiwen(a, k, n);//??????
	}
	return 0;
}
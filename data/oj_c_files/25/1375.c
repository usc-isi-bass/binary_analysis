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

//********************************
//*???2?N??                 **
//*?????? 1300012773        **
//*???2013.11.13              **
//********************************
int main()
{
	int N;
	int num[10000] = {0}; //?????????0
	int result;
	int k;
	cin >> N;

	if(N == 0) //??N?????????????1?
		cout << 1;
	else //??N?????????
	{
		k = 0; //?k???????????
		num[0] = 1;

		//????????????????????
		for(int i = 1; i <= N; i++)
		{
			for(int j = 0; j <= k; j++)
			{
				num[j] *= 2;
			}
			for(int j = 0; j <= k; j++)
			{
				if(num[j] >= 10)
				{
					num[j] -= 10;
					num[j+1]++;
				}
			}

			//??????????????k?1
			if(num[k+1] != 0)k++;
		}

		//????
		for(int j = k; j >= 0 ;j--)
			cout << num[j];
	}

	return 0;
}

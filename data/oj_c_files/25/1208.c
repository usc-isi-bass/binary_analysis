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
	int N;			//N????
	cin >> N;
	int num[32] = {0};
	num[1] = 1;
	int cntbyte = 1;

	for(int i = 1 ; i <= N ; i++)
	{
		for(int j = 1 ; j <= cntbyte ; j++)
			num[j] *= 2;
		for(int j = 1 ; j <= cntbyte ; j++)
		{
			if (num[j] >= 10)
			{
				num[j] -= 10;
				num[j+1] ++;
			}
		}
		if (num[cntbyte + 1] != 0)
			cntbyte ++;
	}
	for (int k = cntbyte; k >= 1; k--)
		cout << num[k];
	cin.get();
	cin.get();
	return 0;
}

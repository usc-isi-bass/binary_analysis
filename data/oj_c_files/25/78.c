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
	int n, num[35], i, j;
	memset(num, 0, sizeof(num));
	cin >> n;
	if(n != 0)
	{
		num[0] = 2;
		for(i = 1; i < n; i++)
		{
			for(j = 0; j < 35; j++)
				num[j] *= 2;
			for(j = 0; j < 35; j++)
			{
				if(num[j] >= 10)
				{
					num[j + 1] += num[j] / 10;
					num[j] = num[j] % 10;
				}
			}
		}
		i = 34;
		while(num[i] == 0)
			i--;
		for( ; i >= 0; i--)
			cout << num[i];
		cout << endl;
	}
	if(n == 0)
		cout << 1 << endl;
	return 0;
}

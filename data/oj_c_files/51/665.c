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
	int n, j, k, leng;
	cin >> n;
	char str[501];
	int num[501] = {0};
	cin >> str;
	leng = strlen(str);
	int i, max = 0;
	for(i = 0; i <= leng - n; i++)
	{
		for(j = i; j <= leng - n; j++)
		{
            for(k = 0; k <= n - 1; k++)
				if(str[i + k] != str[j + k]) break;
			if(k == n)
				num[i]++;
			if(num[i] >= max)
				max = num[i];
		}
	}
	if(max <= 1)
		cout << "NO";
	else
	{
		cout << max << endl;
        for(i = 0; i <= leng - 1 - n; i++)
		    if(num[i] == max)
			{
			    for(j = 0; j <= n - 1; j++)
				{
				    cout << str[i + j];
				}
			    cout << endl;
			}
	}
	return 0;
}
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
	int n, j, k, changdu,i, max = 0;
    cin >> n;
	char str[501];
	int num[501] = {0};
	int *p = num;
	cin >> str;
	changdu = strlen(str);
	for(i = 0; i <= changdu - n; i++)
	{
		for(j = i; j <= changdu - n; j++)
		{
            for(k = 0; k <= n - 1; k++)
				if(str[i + k] != str[j + k]) break;
			if(k == n)
				*(p + i) = *(p + i) + 1;
			if(num[i] >= max)
				max = *(p + i);
		}
	}
	if(max <= 1)
		cout << "NO";
	else
	{
		cout << max << endl;
        for(i = 0; i <= changdu - 1 - n; i++)
		    if(*(p + i) == max)
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


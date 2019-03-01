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
	char a[108];
	char b[108];
	char c[108];
	int i, j, k;
	int la, lb;
	int bit;

	cin >> n;

	for(k = 0; k < n; k ++)
	{
		cin >> a >> b;

		bit = 0;
	
		la = strlen(a);
		lb = strlen(b);

		for(i = la - 1; i >= la - lb; i --)
		{
			if(a[i] - b[i - la + lb] - bit >= 0)
			{
				c[i] = a[i] - b[i - la + lb] - bit + '0';
				bit = 0;
			}
			else
			{
				c[i] = a[i] - b[i - la + lb] - bit + 10 + '0';
				bit = 1;
			}
		}

		c[la - lb - 1] = a[la - lb - 1] - bit;

		for(i = 0; i < la - lb - 1; i ++)
			c[i] = a[i];

		c[la] = '\0';

		cout << c << endl;
		
	}


	return 0;
}

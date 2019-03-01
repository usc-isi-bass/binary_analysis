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
	char a[101], b[101];
	int na[101], nb[101];
	int la, lb, i, n, j;

	cin >> n;
	for(j = 1; j <= n; j++)
	{

		cin >> a >> b;
		la = strlen(a);
		lb = strlen(b);

		memset(na, 0, sizeof(na));
		memset(nb, 0, sizeof(nb));

		for(i = 0; i < la; i++)
		{
			na[i] = a[la - i - 1] - '0';
		}
		for(i = 0; i < lb; i++)
		{
			nb[i] = b[lb - i - 1] - '0';
		}

		for(i = 0; a[i] != '\0'; i++)
		{
			if(na[i] < nb[i])
			{
				na[i + 1] --;
				na[i] = 10 + na[i] - nb[i];
			}
			else 
				na[i] = na[i] - nb[i];
		}

		for(i = i - 1; i >= 0; i--)
			cout << na[i];
			cout << endl;

	}

	return 0;
}
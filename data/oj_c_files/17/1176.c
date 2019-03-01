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
	int x[1000];
	char a[1000];
	int i, j;
	while (cin.getline(a, 1000))
	{
		int l = strlen(a);
		for (i = 0; i < l; i ++)
		{
			if (a[i] == '(')
				x[i] = 1;
			else if (a[i] == ')')
				x[i] = -1;
			else
				x[i] = 0;
		}
		for (i = 1; i < l; i ++)
			for (j = 0; j < l - i; j ++)
				if (x[j] == 1 && x[i + j] == -1)
					x[j] = x[i + j] = 0;
		cout << a << endl;
		for (i = 0; i < l; i ++)
		{
			if (x[i] == 1)
				cout << "$";
			else if (x[i] == -1)
				cout << "?";
			else 
				cout << " "; 
		}
		cout << endl;
	}
	return 0;
}
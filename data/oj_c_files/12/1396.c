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

//***************************
//**???1.cpp
//**??????
//**???2013.10.30
//**???????
//***************************
int main()
{
	int a[17], i, n; // ??0????17???
	while (1)
	{
		n = 0;
		cin >> a[1];

		if (a[1] == -1) break; // ???????-1?????
		for (i = 2; ; i++)
		{
			cin >> a[i];
			if (a[i] == 0) break; // ???0???????
		}
		for (int j = 1; j <= i ;j++)
			for (int k = j + 1; k <= i; k++)
				if (a[j] == 2 * a[k] || a[k] == 2 * a[j])
					n++;
		cout << n << endl;
	}
	return 0;
}
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
	int a[15], count = 0;
	int i, j, k;
	for (i = 0; ; i++)
	{
		cin >> a[i];
		if (a[0] == -1) 
			break;
		else if (a[i] == 0)
		{
			for (j = 0; j < i; j++)
				for (k = 0; k < i; k++)
				{
					if (a[k] == a[j] * 2)
						count++;
				}
				cout << count << endl;
				count = 0;
				i = -1;
		}
	}
	
	return 0;
}

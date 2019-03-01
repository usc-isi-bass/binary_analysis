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
	int n, a[20000]={0}, i, j;
	cin >> n;
	for (i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
		for (j = 0; j <= i - 1; j++)
		{
			if (a[i] == a[j])
			{
				i = i - 1;
				n--;
				break;
			}
		}
	}
	if ((n - 2) >= 0)
	{
	  for (i = 0; i <= n - 2; i++)
	  {
		cout << a[i] << " ";
	  }
	  cout << a[n - 1];
	}
	else
		cout << a[0];
	 
	return 0;
}

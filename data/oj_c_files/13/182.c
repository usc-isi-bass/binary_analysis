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

/**
  *file  ????????
  *author ???
  *date   10.27
  *function ??n????n???????????????10-100??? 
            ??????????????????????????????????????????? 
*/
int main()
{
	int n, a[20001], i, j;
	cin >> n;
	for(i = 1; i <= n; i++)				//???n??
	{
		cin >> a[i];
	}
	cout << a[1];
	for(i = 2; i <= n; i++)
	{
		for(j = i - 1; j >= 1; j--)
		{
			if(a[j] == a[i])
			{
				break;
			}
		}
		if(j == 0)						//??j??0????????????
		{
			cout << " " << a[i]; 
		}
	}
	return 0;
}
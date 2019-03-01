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
	char a[100] , b , g;
	int i,ii;
	cin >> a;
	b = a[0];
	g = a[strlen(a) - 1];
	for (ii = 0;ii < strlen(a);ii++)
	{
		for (i = ii;i >= 0;i--)
		{
			if((a[ii] == g)&&(a[i] == b))
			{
				cout << i << " " <<ii <<endl;
				a[i] = ' ';
				a[ii] = ' ';
			}
		}
	}
	return 0;
}
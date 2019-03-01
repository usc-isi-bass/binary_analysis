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
	char a[1000];
	int n = 1, i, j;
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] - 'a') == (a[i+1] - 'a') ||(a[i] - 'a') == (a[i+1] - 'A')||(a[i] - 'A') == (a[i+1] - 'a')||(a[i] - 'A') == (a[i+1] - 'A'))
			n++;
		else 
		{
			if((a[i] >= 'a') && (a[i] <= 'z'))
			cout << "("<< (char)(a[i] - 'a'+'A')<< "," << n << ")";
			else 
				cout << "("<< a[i]<< "," << n << ")";
			n = 1;
		}
	}
	return 0;
}
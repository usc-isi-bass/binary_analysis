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

//*************************************************
//***?????????***
//***??????***
//***???2013.1.13***
//*************************************************
int main ()
{
	char a[1001],t;
	int num,i = 0;
	cin >> a;
	t = a[0];
	num = 1;
	while(a[i++] != '\0')
	{
		if (a[i] == a[i - 1] || fabs(a[i] - a[i - 1]) == 'a' - 'A')
		{
			num ++;
		}
		else
		{
			if (a[i - 1] >= 'a' && a[i - 1] <= 'z')
				a[i - 1] += 'A' - 'a';
			cout << "(" << a[i - 1] << "," << num << ")";
			num = 1;
			t = a[i]; 
		}
	}
	cout << endl;
	return 0;
}
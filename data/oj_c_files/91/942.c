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

//************???????????*******************
//************???????**************************
//************???1200062701************************
//************?????2012?12?5?******************

int main()
{
	char a[1000], b[1000];
	memset(b, 0, sizeof(b));
	memset(a, 0, sizeof(a));
	int x = 0;
	cin.getline(a,1000);
	for(int i = 0; a[i] != 0; i++)
	{
		x++;           // put down the number of its weishu
	}
	for(int j = 0; j + 1 < x; j++)
	{
		b[j] = a[j] + a[j + 1];
	}
	b[x - 1] = a[x - 1] + a[0];
	for(int i = 0; b[i] != 0; i++)
	{
		cout << b[i];
	}
	return 0;
}

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

//********************************
//*????????             **
//*??????                 **
//*???2012.11.12             **
//*******************************/

int main ()
{
	int a[1000], b[1000], t[1001] = {0};
	int n = 0, i, max = 0;
	do
	{
		cin >> a[n];
		n++;

	}while (cin.get() != '\n');
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
		for ( ; a[i] < b[i]; a[i]++)
			t[a[i]]++;
		cin.get();
	}
	for (i = 0; i < 1000; i++)
	{
		if (t[i] > max)
			max = t[i];
	}
	printf("%d %d", n, max);
	return 0;
}
	

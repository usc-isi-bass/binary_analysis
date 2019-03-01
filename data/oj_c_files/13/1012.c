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
	int a[20001];
	int b[100];
	int n, i;
	cin >> n;
	for(i = 0; i < 100; i++)
		 b[i] = 0;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		b[a[i]]++;
		if(b[a[i]] == 1)
		{
		    if(i > 0)
			cout << " ";
		    cout << a[i];
                   }
	}
	cout << endl;
	return 0;
}
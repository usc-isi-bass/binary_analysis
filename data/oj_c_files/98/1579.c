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
	int n, i, t = 0, s1 = 0, d, s2 = 0, d2 = 80;
	char a[500][41], (*p)[41];
	cin >> n;
	for(i = 0; i <= n - 1; i ++)
		cin >> a[i];
	while(t < n)
	{
		d = strlen(a[t]);
		t ++;
		if(d > d2)
		{
			s2 = t - 2;
			cout << a[s1];
			for(p = a + s1 + 1; p <= a + s2; p ++)
				cout << " " << *p;
			cout << endl;
			s1 = t - 1;
			d2 = 79 - d;
		}
		else
		{
			d2 = d2 - d - 1;
		}
	}
	if(t - s1 >= 1)
	{
		cout << a[s1];
		for(p = a + s1 + 1; p <= a + n - 1; p ++)
			cout << " " << *p;
		cout << endl;
	}
	return 0;
}






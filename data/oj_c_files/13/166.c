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
	int a[101] = {0};
	int i = 0;
	int n = 0;
	int t = 0;
	int f = 0;

	cin >> n;
	for (i = 1; i <= n; i ++) {
		cin >> t;		
		if ((f != 0)&&(!a[t]))
			cout << " ";
		else
			f = 1;
		if (!a[t]) cout << t;
		a[t] = 1;
	}
	return 0;
}
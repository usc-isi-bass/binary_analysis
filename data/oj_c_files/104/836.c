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

int Sort(int a,int b)
{
	int i;
	if (a == b)
		return a;
	else if (a>b)
		Sort(a/2,b);
	else
		Sort(a,b/2);
}

int main()
{
	int x,y,xi;
	cin >> x >> y;
	cout << Sort (x,y) << endl;
	return 0;
}
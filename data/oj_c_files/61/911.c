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


int feb(int n)
{
	if (n == 1)
		return 1;
	else
	{
		if (n == 2)
			return 1;
		else 
			return feb(n-1) + feb(n-2);
	}
	return true;
}

int main()
{
	int m, zu, i;
	int mem[10000];
	cin >> zu;
	for (i = 0; i < zu; i ++)
	{
		cin >> m;
		mem[i] = feb(m);
	}
	for (i = 0; i < zu; i ++)
	{
		if (i < zu - 1)
			cout << mem[i] << endl;
		else
			cout << mem[i];
	}
	return 0;
}
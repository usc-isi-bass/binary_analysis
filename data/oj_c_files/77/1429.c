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

char a[100], b;
int w;
int find(int);
int main()
{
	cin >> a;
	b = a[0];
	find(0);
	cin.get();
	cin.get();
	return 0;
}

int find(int j)
{
	w = j;
	if(a[j] != b)
		return j;
	else
	{
		cout << j << " " << find(j+1) << endl;
		return find(w+1);
	}
	return 0;
}
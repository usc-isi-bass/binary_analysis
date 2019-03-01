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


int fact(int a, int min)
{
	if (a<min)
		return 0;
	int way = 1;
	for (int i = min; i <= sqrt((double)a); i++)
	if (a%i == 0)
		way += fact(a / i, i);
	return way;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		int c;
		cin >> c;
		cout << fact(c, 2) << endl;
	}
	return 0;
}

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
	int n, where;
	cin >> n >> where;
	int num[max];
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int *p = num;
	for (int i = 0; i < n - where; i++)
		*(p + n + i) = *(p + i);
	p = p + n-where;
	for (int i = 0; i < n;i++)
	if (i == 0)
		cout << *(p + i);
	else
		cout << " " << *(p + i);
	



}



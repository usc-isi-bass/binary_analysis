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


struct person
{
	int flag;
	int count;
}p[10001];

int main()
{
	int n, i, j, g = 0;
	cin >> n;
	while (1)
	{
		cin >> i >> j;
		if (i == 0 && j == 0) break;
		p[i].flag = 1;
		p[j].count++;
	}
	for (int i = 0; i < n; i++)
	{
		if (p[i].flag == 0 && p[i].count == n - 1) g = 1, cout << i << endl;
	}
	if (g == 0) cout << "NOT FOUND" << endl;
	return 0;
} 

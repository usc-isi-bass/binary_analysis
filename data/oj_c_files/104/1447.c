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

int k;
void tree(int m, int n)
{
	if (m == n)
		k = m; // ?? 
	else if (m > n)
		tree(m / 2, n); 
	else if (m < n)
		tree(m, n / 2); // ?? 
}
int main()
{
	int x, y;
	cin >> x >> y;
	tree(x , y); 
	cout << k;
	return 0;
}

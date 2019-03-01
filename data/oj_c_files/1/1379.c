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

int factorization(int num, int i);
int main()
{
	int n, i, num;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num;
		cout << factorization(num, 2) << endl;
	}
	return 0;
}

int factorization(int num, int i)
{
	int j, squ, sum = 1;
	squ = sqrt((double) num);
	for (j = i; j <= squ; j++)
	{
		if (num % j == 0)
			sum = sum + factorization(num / j, j);
	}
	return sum;
};
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

int getNum(int m, int n);
int main()
{
	int t, M, N, Num;
	cin >> t;
	while(t >= 1)
	{
		Num = 0;
		cin >> M >> N;
		Num = getNum(M, N);
		cout << Num << endl;
		t--;
	}
	return 0;
}
int getNum(int m, int n)
{
	if(n == 1 || m == 1 || m == 0)
		return 1;
	if(m < 0)
		return 0;
	if(n != 1 && m > 1)
		return getNum(m, n - 1) + getNum(m - n, n);
}
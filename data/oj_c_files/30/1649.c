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
	int Sum = 0, N;
	cin >> N;
	for (int I = 1; I <= N; I++)
	{
		int K = I,Flag = 0;
		while (K)
		{
			if (K % 10 == 7) Flag = 1;
			K = K / 10;
		}
		if (I % 7 == 0) Flag = 1;
		if (!Flag) Sum += I*I;
	}
	cout << Sum <<endl;
	return 0;
}

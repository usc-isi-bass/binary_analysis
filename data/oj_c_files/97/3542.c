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
	int N, K, Ans;
	cin >> N;
	printf("%d\n",N / 100);
	N = N - (N / 100) * 100;
	printf("%d\n",N / 50);
	N = N - (N / 50) * 50;
	printf("%d\n",N / 20);
	N = N - (N / 20) * 20;
	printf("%d\n",N / 10);
	N = N - (N / 10) * 10;
	printf("%d\n",N / 5);
	N = N - (N / 5) * 5;
	printf("%d\n",N / 1);
	N = N - N / 1;
	return 0;
}

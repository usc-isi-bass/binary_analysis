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
	int N,M;
	double A[2013],S;
	cin >> N;
	for (int I = 1; I <= N; I ++)
	{
		cin >> M;
		for (int J = 1; J <= M; J ++) cin >> A[J];
		double *P = A;
		S = 0;
		for (int J = 1; J <= M; J ++) S += *(P + J);
		S /= M;
		double Ans = 0;
		for (int J = 1; J <= M; J ++) Ans = Ans + (*(P + J) - S) * (*(P + J) - S);
		printf("%.5lf\n",sqrt(Ans/M));
	}
}
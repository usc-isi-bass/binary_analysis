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

int N;
double X[21003],Y[20113],Ans = 0;
double Max(double X,double Y)
{
	return X > Y ? X : Y;
}
int main()
{
	cin >> N;
	int K = 1;
	for (int I = 1; I <= N; I ++) cin >> X[I] >> Y[I];
	for (int I = 1; I <= N; I ++)
		for (int J = I + 1; J <= N; J ++) Ans = Max(Ans,(X[I] - X[J])*(X[I] - X[J]) + (Y[I] - Y[J])*(Y[I] - Y[J]));
	printf("%.4f\n",sqrt(Ans));
}
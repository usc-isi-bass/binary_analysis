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

int X, Y, TX, TY;
int A[256],B[256];
int main()
{
	cin >> X >> Y;
	A[TX = 1] = X;
	B[TY = 1] = Y;
	while (A[TX] > 1)
	{
		A[TX + 1] = A[TX] / 2;
		TX ++;
	}
	while (B[TY] > 1)
	{
		B[TY + 1] = B[TY] / 2;
		TY ++;
	}
	while ((A[TX] == B[TY]) && (TX > 0) && (TY > 0))
	{
		TX --;TY --;
	}
	cout << A[TX + 1] << endl;
}
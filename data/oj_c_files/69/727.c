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

int Max(int X,int Y)
{
	return X > Y ? X : Y;
}
int main()
{
	char A[260],B[260];
	int C[260];
	gets(A);
	gets(B);
	int N = strlen(A);
	int M = strlen(B);
	int S = Max(N,M);
	memset(C,0,sizeof(C));
	for (int I = 0; I < N; I ++) C[I] = A[N - I - 1] - '0';
	for (int I = 0; I < M; I ++) C[I] = C[I] + B[M - I -1] - '0';
	for (int I = 0; I < S; I ++)
		if (C[I] >= 10)
		{
			C[I] = C[I] - 10;C[I + 1] ++;
		}
	while (C[S] == 0 && S >= 0) S --;
	for (int I = S; I >= 0; I --) cout << C[I];
	if (S<0) cout << 0;
}
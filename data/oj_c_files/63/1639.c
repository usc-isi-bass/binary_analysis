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
	int T, N, M, NN, MM;
	int A[113][113],B[113][113],C[113][113];
	cin >> N >> M;
	for (int I = 1; I <= N; I ++)
		for (int J = 1; J <= M; J ++) cin >> A[I][J];
	cin >> NN >> MM;
	for (int I = 1; I <= NN; I ++)
		for (int J = 1; J <= MM; J ++) cin >> B[I][J];
	for (int I = 1; I <= N; I ++)
		for (int J = 1; J <= MM; J++)
			for (int K = 1; K <= M; K ++) C[I][J] += A[I][K] * B[K][J];
	for (int I = 1; I <= N; I ++)
	{
		for (int J = 1; J < MM; J++) printf("%d ",C[I][J]);
		cout << C[I][MM] << endl;
	}		
	return 0;
}

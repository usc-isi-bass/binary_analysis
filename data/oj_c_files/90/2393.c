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

//********************
//**??????	**
//**?????		**
//**???2013.11.28**
//**????2.cpp	**
//********************
int N, M;
int method(int N, int M) // ??????????
{
	if (N == 1 || (N == 0 && M == 0)) // ??1????????????
		return 1; // ??????1
	if (N > M) // ?N > M?????????
		return method(N - 1, M); // ???????????

		/*??????????????????
		  ????????????????1??????*/
		return method(N - 1, M) + method(N, M - N);
}
int main()
{
	int t, i, K;
	cin >> t; // ??????t
	for (i = 0;	i < t; i++) // ??t?
	{
		cin >> M >> N; // ??????M?????N
		K = method(N, M); // ??method?????????????
		cout << K << endl; // ??K
	}
	return 0;
}
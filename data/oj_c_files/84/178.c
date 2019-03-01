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
	int A[100 + 10], N;
	cin >> N;
	for (int i = 0; i < N; i ++)
		cin >> A[i];
	sort(A, A + N);
	cout << A[N - 1] << endl << A[N - 2] << endl;
	return 0;
}


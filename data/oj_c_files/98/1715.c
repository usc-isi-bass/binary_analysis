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
	char A[2013][100];
	int N;
	scanf("%d\n",&N);
	for (int I = 1; I <= N; I ++) cin >> A[I];
	int S = 0;
	for (int I = 1; I <= N; I ++)
	{
		if (S == 0)
		{
			cout << A[I];
			S = strlen(A[I]);
		}
		else if (S + strlen(A[I]) + 1 <= 80)
			{
				cout << " " << A[I];
				S = S + strlen(A[I]) + 1;
			}
			else
			{
				S = 0;
				printf("\n");
				I --;
			}
	}
}
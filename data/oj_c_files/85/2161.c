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
	char A[2013];
	int N;
	scanf("%d\n",&N);
	while (N --)
	{
		gets(A);
		int L = strlen(A);
		int K = 0;
		for (int I = 0; I < L; I ++)
		{
			int Flag = 0;
			if ('A' <= A[I] && A[I] <= 'Z') Flag ++;
				else if ('a' <= A[I] && A[I] <= 'z') Flag ++;
					else if ('0' <= A[I] && A[I] <= '9') Flag ++;
						else if (A[I] == '_') Flag ++;
			if (!Flag) K = 1;
		}
		if (('A' <= A[0] && A[0] <= 'Z') || ('a' <= A[0] && A[0] <= 'z') || (A[0] == '_')); else K = 1;
		if (!K) cout << "yes" << endl;
			else cout << "no" << endl;
	}
}
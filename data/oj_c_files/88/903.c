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
	char C[500];
	char *P;
	gets(C);
	P = C;
	int L = strlen(P);
	for (int I = 0; I < L; I ++)
		if (P[I] >= '0' && P[I] <= '9')
		{
			int J;
			for (J = I; J < L; J ++)
				if (P[J] >= '0' && P[J] <= '9') cout << P[J]; else break;
			I = J;
			printf("\n");
		}
}
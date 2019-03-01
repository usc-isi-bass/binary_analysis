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
	int N,Number[2000];
	char C[2000];
	int Top = 0;
	gets(C);
	N = strlen(C);
	for (int I = 0; I < N; I ++)
	{
		if (C[I] != C[0])
		{
			cout << Number[Top] << " " << I << endl;
			Top --;
		}
			else Number[++Top] = I;
	}
}
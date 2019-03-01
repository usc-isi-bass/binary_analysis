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
	int N;
	scanf("%d",&N);
	if (!N) cout << 0 << endl;
	else while (N)
	{
		cout << N%10;
		N/=10;
	}
	return 0;
}

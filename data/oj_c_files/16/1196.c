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
	int n;
	cin >> n;
	if (n == 0) cout << 0;
	for (int i = 0; n; i++)
	{
		cout << n % 10;
		n /= 10;
	}
    return 0;
}

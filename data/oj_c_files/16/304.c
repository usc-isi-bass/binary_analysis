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
	char c, i = 0;
	char num[7] = {0};
	while((c = cin.get()) != '\n')
	{
		num[i ++] = c;
	}
	for (i = i - 1;i >= 0; i --)
		cout << num[i];
	cout << endl;
	return 0;
}
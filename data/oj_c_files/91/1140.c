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
	char str[200];
	char trans[200] = {0};
	int len;
	cin.getline(str, 200);
	len = strlen(str);

	for (int i = 0; i < len - 1;i++)
	{
		trans[i] = str[i] + str[i+1];
	}

	trans[len - 1] = str[len - 1] + str[0];
	cout << trans;
	return 0;
}
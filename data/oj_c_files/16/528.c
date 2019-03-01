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
	int weishu[5] = {-1, -1, -1, -1, -1}, num, i = 0;
	cin >> num;
	do{
		weishu[i] = num % 10;
		num = num / 10;
		i++;
	}while(num > 0);
	for (i = 0; i < 5; i++)
		if (weishu[i] != -1)
			cout << weishu[i];
	return 0;
}
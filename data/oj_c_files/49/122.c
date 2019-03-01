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

void same(int i, char x[])
{
	int j, k;
    int flag = 1;
	for(j = 0; x[j] != '\0'; j++)
	{
		flag = 1;
		for(k = 0; k <  + i / 2; k ++)
		{
			if(x[k + j] != x[j + i - 1 - k])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			for(k = j; k < j + i; k ++)
				cout << x[k];
			cout << endl;
		}
			
	}
}
int main()
{
	char x[501];
	int i, len;
	cin >> x;
	len = strlen(x);

	for(i = 2; i <= len; i++)
	{
		same(i, x);
	}
	return 0;
}
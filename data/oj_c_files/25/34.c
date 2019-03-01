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

int n, num[100];
void multi()
{
	int pos = 0, step;
	while(num[pos] == 0)
	{
		pos++;
	}		
	for(int i = 99; i >= pos; i--)
		num[i] *= 2;
	for(int i = 99; i >= pos; i--)
	{
		if(num[i] >= 10)
		{
			step = num[i] / 10;
			num[i - 1] += step;
			num[i] = num[i] % 10;
		}
	}
}	
int main()
{
	int p = 0;
	cin >> n;
	if(n == 0)
		cout << 1 << endl;
	else
	{
		memset(num, 0, 100);
		num[99] = 2;
		for(int i = 1; i < n; i++)
			multi();
		while(num[p] == 0)
		{
			p++;
		}
		for(; p < 100; p++)
			cout << num[p];
	}
	return 0;
}
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


void Multiply(int[50]);

int main()
{
	int n, num[50] = {0}, i;
	num[0] = 1;
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		Multiply(num);
	}
	i = 49;
	while(num[i] == 0) i--;
	for(; i >= 0;)
	{
		cout << num[i--];
	}
	return 0;
}

void Multiply(int num[50])
{
	int i;
	for(i = 0; i < 50; i++)
	{
		num[i] *= 2;
	}
	for(i = 0; i < 50; i++)
	{
		if(num[i] >= 10)
		{
			num[i + 1] += num[i] / 10;
			num[i] = num[i] % 10;
		}
	}
	return;
}

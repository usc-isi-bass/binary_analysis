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

int main ()
{
	int n, i, j,flag = 0;
	int num[32] = {0};

	cin >> n;
	num[0] = 2;
	
	for(i = 1; i <= n - 1; i++)
	{
		for(j = 0; j < 32; j++)
		{
			num[j] *= 2;
		}
		for(j = 0; j < 32; j++)
		{
			if(num[j] >= 10)
			{
				num[j] -= 10;
				num[j+1]++;
			}
		}
	}
	

	if(n != 0)
	{
		for(j = 31; j >= 0; j--)
		{
			if(num[j] == 0 && flag == 0)
				continue;
			else
				flag = 1;
			if(flag == 1)
				cout << num[j];
		}
	}
	else
		cout << "1";
	cout << endl;

	return 0;
}
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
	int num[1000000]={0};
	int n, i, j, *p, count = 0, flag = 0;
	cin >> n;
	do
	{
		cin >> i;
		cin >> j;
		if(i + j == 0)     break;
		else
		{
			num[j]++;
		}
	}while(1);
	p = num;
	while(count < n)
	{
		if( *p == n-1 )
		{
			cout << count;
			flag = 1;
			break;
		}
		else
		{
			p++;
			count++;
		}
	}
	if(!flag)       cout << "NOT FOUND";

	return 0;
	}
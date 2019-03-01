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

int check(int);
int main()
{
	int n,i,j;
	cin >> n;
	for(i = 2; i < n; i++)
	{
		if((i % 2 != 0)&&(check(i)))
		{
			for(j = i; j < n; j++)
			{
				if((j % 2 != 0)&&(check(j)))
					if(i + j == n)
						cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}
int check(int m)
{
	if(m == 2)
		return 1;
	int i,j;
	j = sqrt(m);
	for(i = 2; i <= j; i++)
	{
		if(m % i == 0)
			break;
	}
	if(i == j + 1)
		return 1;
	else
		return 0;
}
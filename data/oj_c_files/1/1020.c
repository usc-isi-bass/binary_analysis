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

int sum = 0;
void f(int a,int s)
{
	int i;
	if(a == 1)
		sum++;
	else
	{

		for(i = s; i <= a; i++)
		{
			if(a % i == 0)
				f((a / i),i);
		}
	}
	return;
}


int main()
{
	int n, num, j;
	cin >> n;
	for (j = 1; j <= n; j++)
	{
		cin >> num;
		f(num,2);
		printf("%d\n",sum);
		sum = 0;
	
	}
	return 0;
}

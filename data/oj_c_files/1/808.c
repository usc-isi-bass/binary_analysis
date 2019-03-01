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
void fenjie(int t,int n)
{
	int i = 0;
	if(n == 1)
	    sum++;
    for(i = t; i <= n; i++)
	{
		if(n % i == 0)
		{
			fenjie(i, n / i);
		}
	}
}
int main()
{
	int n = 0, k = 0;
	cin >> n;
	while(n > 0)
	{
		 cin >> k; 
         sum = 0;
		 fenjie(2,k);
		 n--;
		 cout << sum <<endl;
	}
	return 0;
}
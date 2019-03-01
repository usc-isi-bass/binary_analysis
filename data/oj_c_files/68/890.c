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

int judge(int m)
{
	int i;
	if(m >= 4)
	{
     	for(i = 2; i <= sqrt(m); i++)
		{
	     	if(m % i == 0)
			{
	        	return 0;
		    	break;
			}
		}
    	if(i > sqrt(m))
		{
    		return 1;
		}
	}
	if(m == 3)
	{
		return 1;
	}
}
int main()
{
	int i, j, n;
	cin >> n;
	for(i = 6; i <= n; i = i + 2)
	{
		for(j = 3; j <= i / 2; j++)
		{
			if(judge(j) == 1 && judge(i - j) == 1)
			{
				cout << i << "=" << j << "+" << i - j << endl;
				break;
			}
		}
	}
	return 0;
}
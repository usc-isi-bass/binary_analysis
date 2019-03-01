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
	int trans,decimal = 0,i,len;
	char num[910000]={'0'};
	num[0]='2';
	long int p;
	cin >> p;
	if (p == 0)
	{
		cout << '1' << endl;
		return 0;
	}
	while(p -1)
	{
		decimal = 0;
		len = strlen(num);
		for (i = 0; i < len; i++)
		{
			trans = (num[i] -'0') * 2 + decimal;
			if (trans>=10)
			{
				trans-=10;
				num[i] = '0'+trans;
				decimal = 1;
			}
			else
			{
				num[i]='0'+ trans;
				decimal = 0;
			}
		}
		if (decimal)
		{
			num[i] = '1';
			num[i+1] = '\0';
		}
		else
		{
			num[i] = '\0';
		}
		p--;
	}
	len = strlen(num);
	for (i = len-1; i>=0; i--)
	{
		cout << num[i];
	}
	cout << endl;
	    return 0;
}


		


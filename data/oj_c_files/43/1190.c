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

//********************************************
//*?????????                        *
//*??????                              *
//*???1300012888                          *
//*???2013.10.23                          *
//********************************************

int main()
{
	int m, a, b, i, j;

	cin >> m;
	for(a = 3;a <= m / 2;a = a + 2)           //?3????2??
	{                                         //??m?????
		for(i = 2;i <= sqrt(a);)
		{
			if(a % i != 0)                    
				i ++;
			else
				break;
		}
		if(i > sqrt(a))                       //??a???
		{
			b = m - a;
			for(j = 2;j <= sqrt(b);)
			{
				if(b % j != 0)
					j ++;
				else
					break;
			}
			if(j > sqrt(b))                   //??b???
				cout << a << " " << b << endl;
		}
	}
	
	return 0;
}
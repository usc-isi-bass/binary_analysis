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

//*************************************
//????4.cpp                       *
//????? 1? 1200012895           *
//???2012?10?22?                *
//??????                        *
//*************************************
int main()
{
	int n, i, a, b, c, x = 0, sum = 0;                             //n????i??????a????b?c?????x??????sum????
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		if (b > c)                                                 //??????????????
		{
			x = b;
			b = c;
			c = x;
		}
		if ((a % 400 == 0) || (a % 100 != 0 && a % 4 == 0))        //??a???
		{
			for (; b < c; b++)
			{
				if (b == 2)                                        //b?2??????29
					sum = sum + 29;
				else 
					if (b == 4 || b == 6 || b == 9 || b == 11)     //b?????30
						sum = sum + 30;
					else 
						sum = sum + 31;                            //b?????31
			}
		}
		else                                                       //??a???????2???b???28?????
		{
			for (; b < c; b++)
			{
				if (b == 2)
					sum = sum + 28;
				else 
					if (b == 4 || b == 6 || b == 9 || b == 11)
						sum = sum + 30;
				    else 
						sum = sum + 31;
			}

		}
		if ( sum % 7 == 0 )                                       //??????7??????YES
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;                                 //????NO
		sum = 0;                                                  //??
		x = 0;
	}
	return 0;
}

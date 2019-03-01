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

//********************************
//*?????????    **
//*??? ??? 1300012745 **
//*???2013.10.25  **
//********************************
int main() 
{
	int m, a, b, i, n=0;
	cin>>m;
	for (a=3;a <= m / 2;a+=2)
	{
		for (i=3;i <= sqrt(a);i++)
		{
			if (a % i==0)
				n++;
		}
		if (n==0)
		{
			b=m - a;
			for (i=3;i <= sqrt(b);i++)
			{
				if (b % i==0)
					n++;
			}
			if (n==0)
				cout << a << " " << b <<endl;
		}
		n=0;  //?n????????????
	}
	return 0;
}






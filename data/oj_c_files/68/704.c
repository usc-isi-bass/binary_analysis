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

//******************************************************************
//*??????????                                            *
//*????????n?n <= 50000???                             *
//       ?6 ~ n?????????????????                 *
//*??????                                                    *
//*???2010?10?20?                                            *
//******************************************************************
int main()
{
	int n, x, i;
	cin >> n;
	int godbah(int);                       //?godbah??????
	for (i = 6; i <= n; i = i + 2)         //??????????
	{
		x = godbah(i);
		cout << i << '=' << x << '+' << i - x << endl;
	}
	
	return 0;
}
int prime(int n)                           //??????prime???????????
{
	int i, p = 1, k = (int) sqrt(n);
	for (i = 2; i <= k; i ++)              //for????
	{
		if (n % i == 0)                    //?????????????p??0
		{
			p = 0;
			break;
		}
	}
	return p;                             //??p?
}
int godbah(int n)                         //??godbah?????????????????
{
	int a, q;
	for (a = 3; a <= n / 2; a = a + 2)
	{
		if (prime(a) == 1 && prime(n - a) == 1)//?????????????????????
		{
			q = a;
			break;
		}
	}
	return q;
}


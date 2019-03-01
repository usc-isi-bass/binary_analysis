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

//* * * * * * * * * * * * * * * * * * * * * * * * 
//*????????                             *
//*???????? .cpp                        *
//*?????  1000012839                       *
//*???2010.12.04                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int ways(int a, int min);	//	????ways?????????a??????,a??????min?
int main()
{
	int n, a, i, sum = 0, k, min;	//	n?????????,a????????????i,k?a??????min??????sum?
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		sum = 0;
		for (k = 2; k <= a; k++)
		{
			if (a % k == 0)
			{
				min = k;
				break;
			}
		}	//	???????
		if (a != min)
			sum = ways(a, min);	//	??a??????????
		else
			sum = 1;	//	??a?????????????
		cout << sum << endl;
	}
	return 0;
}
int ways(int a, int min)	
{
	int result = 1, i;	//	result????1??a = a???,i??????
	if(a < min)
		return 0;	//	????????????? 
	for (i = min; i < a; i++)
	{		
		if (a % i == 0)
			result += ways(a / i, i);	//	?????i??a/i????????????
	}
	return result;
}


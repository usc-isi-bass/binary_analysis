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

/**
  *file  ????????
  *author ???
  *date   10.23
  *function ???????????????????n?n <= 50000??? 
            ?6 ~ n??????????????????
*/
int main()
{
	int n, i, q, p, k;
	cin >> n;
	for(k = 6; k <= n; k = k+2)
	{
		for(i = 2; i <= sqrt((double)(k-2)); i++)			//???????n???2+?n-2????
		{	
			if((k-2) % i == 0)
			{
				break;
			}
		}
		if(i > sqrt((double)(k-2)))
		{
			cout<<k<<"=2+"<<k-2<<endl;
		}
		for(i = 3; i <= k/2; i=i+2)											//??[3,sqrt(n)]?????
		{
			for(q = 2; q <= sqrt((double)i); q++)
			{
				if(i % q == 0)
				{
					break;
				}
			}
			if(q > sqrt((double)i))											//????????
			{
				for(p = 2; p <= sqrt((double)(k-i)); p++)					//????????????
				{
					if((k-i) % p == 0)
					{
						break;
					}
				}
				if(p > sqrt((double)(k-i)))
				{
					cout << k << "=" << i << "+" << (k-i) << endl;
					break;
				}
	 		}
		}
	}
	return 0;
}
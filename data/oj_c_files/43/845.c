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

//************************************************
// ?? ?1.cpp                                  *
// ?? ????    1200012925                   *
// ?? ?10?22?                               *
// ?? ?????????                       *
//************************************************
int main()
{
//??????? ????????????
	int n, a, b, i, m, sum, sum2;
//?????????
	cin >> n;
//??????????
	for (i = 1 ; i <= (n - 2) / 4 ;  i ++)
	{
		a = 2 * i + 1 ;
		sum = 0;
//??a???		
		for (m = 1 ; m < a ;  m ++)
		{
		     if (a % m != 0 )
				sum = sum + 1 ;
		}
//?????a?????? ???
//?a ?????????b ?????
//?????a 
		if ( sum == a - 2 )
			{
				b = n - a ;
				sum2 = 0;
				for (m = 1 ; m < b ; m = m++)
				{
					if ( b % m != 0 )
						sum2 += 1 ;
//???????? ????
					if ( sum2 == b - 2 )
						cout << a <<" " << b << endl ;
				}
			}
	}
	return 0 ;
}

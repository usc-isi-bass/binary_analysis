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

//********************************************************
//*  ?  ?: ???                                      *
//*  ?  ?: ???  1200012861                          *
//*  ?  ?: 2012?10?21?                              *
//********************************************************
int main()
{
	int n, i, j, y, m1, m2, min, max, sum, month[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> y >> m1 >> m2;
		min = m1 < m2 ? m1 : m2;
		max = m1 > m2 ? m1 : m2;
		if (((y % 100 != 0) && (y % 4 == 0)) || (y % 400 == 0))
			                                         //?????????
		{
			sum = 0;                                 //???????????sum
			month[1] = 29;                           //???2????????29
			for (j = min; j < max; j++)
				sum = sum + month[j - 1];            //??????????sum
			if (sum % 7 == 0)                        //??sum??7???????
				cout << "YES" << endl;               //???YES
			else 
				cout << "NO" << endl;                //????NO
		}
		else                                         //?????????
		{
			sum = 0;                                 //???????????sum
			month[1] = 28;                           //???2????????28
			for (j = min; j < max; j++)
				sum = sum + month[j - 1];            //??????????sum
			if (sum % 7 == 0)                        //??sum??7???????
				cout << "YES" << endl;               //???YES
			else 
				cout << "NO" << endl;                //????NO
		}
	}
	return 0;
}






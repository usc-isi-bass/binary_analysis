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
//*????1000012839_3                         *
//*???? ????????                    *
//*?????                                   *
//*???2010.10.29                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 
int main()
{
	int n, i, j, k, m;	//	i,j??????n???????????k??????????
	int a[100000];	//	?????
	cin >> n;	//	??n?
	for (i = 0; i <= n - 1; i++)
		cin >> a[i];
	cin >> k;
	for (m = 0, j = 0; m <= n - 1; m++)
	{
		if (a[m] != k)	//	??????k??
		{
			a[j++] = a[m];
			if (j != 1)
				cout << ' ' << a[j - 1];	//	????????????????????????
			else
				cout << a[j - 1];
		}
		
	}
	return 0;
}
			
		




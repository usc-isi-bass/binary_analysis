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

int main ()
{
	int a[20],n,i=1;                             //????????????????.??????????a[],????a?????
	cin >> n;
	while(i <= n)
	{
		cin >> a[i];
		i = i + 1;
	}
	int C;
	i = 1;
	while(i <= n)
	{
		if(a[i] == 1)                            //????????????????????
			{cout << "1" << endl;
		     i = i + 1;}
		else if(a[i] == 2)
		{
			cout << "1" << endl;
			i = i + 1;
		}
		else
		{
			int A=1,B=1;
			while(a[i]-2 > 0)                    //??????????????
			{
				C = A + B;                       //?????????????
				A = B;
				B = C;
				a[i] = a[i] - 1;
			}
			cout << C << endl;
	        i = i + 1;
		}

	}
	return 0;
}

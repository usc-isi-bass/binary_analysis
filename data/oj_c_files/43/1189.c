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
//*?????????   
//*?????? 1300012887 **
//*???2013.10.18 **
//********************************
int main()
{
	int m, i, a, j, b, k;    //??????
	cin >> m;
		for (i = 3; i <= m/2; i += 2)    //?????3??????i?m-i?????
		{
			int a = sqrt(i);
			for (j = 2; j <= a; j++)    //??????i?????
			{
				if (i % j == 0) 
					break;
			}
			int b = sqrt(m - i);
			for (k = 2; k <= b; k++)    //??????m-i???
			{
				if ((m - i) % k == 0) 
					break;
            }
			if ((j == a + 1) && (k == b + 1))    //?????????????
				cout << i << " " << m - i << endl;
		}

	    return 0;
}



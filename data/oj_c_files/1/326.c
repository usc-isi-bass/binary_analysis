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

//**********************************************
//**???1090 ????*************************
//**?????? 1000012741*********************
//**???2010?12?7?*************************
//**********************************************
//??change???a???????p???????
int change (int a, int p)      
{
	int i, count = 0;                             //count??????????
	for (i = p; i < a; i++)
	{
		if (a % i == 0 && a / i >= i)             //??????????????
		{
			count++;                              //???1
			int k, t;
			k = (int) sqrt(a / i);                //?k?a/i????
			for (t = 2; t <= k; t++)
			{
				if ((a / i) % t == 0)             //??a???2?k??????
				{
					count += change (a / i, i);   //?a/i??????
					break;
				}   
			}  
				
		}
	}
	return count;                                 //??count?
}
int main()
{
	int n, i, a;                                  //n?????????a?????
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int total = 0;                            //total?????
		cin >> a;
		total += change (a, 2);                   //??change??
		cout << total + 1 << endl;                //??1?????????????
	}
	return 0;
}
//**********************************************
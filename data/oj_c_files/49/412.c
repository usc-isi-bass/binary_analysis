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

//**********************************
//*????.cpp                    *
//*??????                    *
//*???2011-10-30                *
//**********************************


void checking (char check[], int i) 
{
	int m, q;
	for (m = 0; m < i; m++)
	{
		if (check[m] != check[i - 1 - m])        //??check???????break???
			break;
	}
	if (m == i)
	{
		for (q = 0; q < i; q++)
		{
			cout << check[q];                    //????break???????????????????
		}
		cout << endl;
	}
}
int main()
{
	int i, j, k, m, n, flag, q;
	char str[501];
	char check[501];                                     //???????????????
	cin >> str;
	n = strlen(str);                                     //????????
	for (i = 2; i <= n; i++)
	{
		flag = 0;
		for (j = 0; j < n - i + 1; j ++)
		{
			for (k  = j; k < j + i; k ++)
			{
				check[k - j] = str[k];                   //??????????check??
			}
			checking (check, i);
		}
	}
	return 0;
}

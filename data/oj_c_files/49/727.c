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

//*******************************
//????4.cpp                 *
//???2012?11?10?          *
//????? 1? 1200012895     *
//???????                *
//*******************************
int main()
{
	char a[501], c;                                        //a??????c??????
	int i = 1, j, k, l = 0, t = 0, sum;                    //i????????j?k?????l?sum??k??????sum?????????
    while ((c = cin.get()) != '\n')                        //??????????a
	{
		a[i] = c;
		i++;
	}
	i--;                                                   //???????
	for (sum = 2; sum <= i; sum = sum + 2)                 
	{
		for (j = 1; j <= i - sum + 1; j++)
		{
			for (k = j; k <= sum / 2 + j - 1; k++)         //???????????
			{
				l = sum + j - (k - j + 1);
				if (a[k] == a[l])
					t++;
				l = 0;
			}
			if (t == sum / 2)                              //?????????????????????????
			{
				for (k = j; k <= sum + j - 1; k++)
					cout << a[k];
				cout << endl;
			}
			t = 0;                                         //??
		}
	}
	return 0;
}

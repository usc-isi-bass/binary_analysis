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

//**************************
//*  ??????2?N??  *
//*  ?  ?????        *
//*  ?  ??1000012738    * 
//*  ?  ??2010.12.21    *
//**************************

int main()
{
	int product[33] = {0}, i, j, n;        // ?????????????
	cin >> n;                              // ????
	product[0] = 1;                        // ??????1
	for(i = 0; i < n; i++)                 // ????
	{
		for(j = 0; j < 33; j++)            // ????2
		{
			product[j] *= 2;
		}
		for(j = 0; j < 33; j++)            // ???????
		{
			if(product[j] >= 10)           // ???10
			{
				product[j] -= 10;          // ???10
				product[j + 1] += 1;       // ????1
			}
		}
	}
	for(i = 32; i >= 0; i--)               // ????????????????????
		if(product[i] != 0)
			break;
	for( ; i >= 0; i--)                    // ????
	{
		cout << product[i];
	}
	return 0;
}
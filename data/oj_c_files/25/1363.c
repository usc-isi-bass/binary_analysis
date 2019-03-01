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

/*************************************
*file 5.cpp                     ******
*author ???                    ****
*date 2013-11-19                   ***
*description 2?n??                *
*************************************/
int main()
{
	int n;
	cin >> n;      //?????
	int c[200] = {0};  //??????????
	c[0] = 1;          //??2?0?????
	int i, j, k;
	int m = 0;          //??????????????-1
	for(i = 1; i <= n; i++)
	{

		//????
		for(j = 0; j <= m; j++)
		{
			c[j]*=2;          //?????????2?
		}

		//????
		for(j = 0; j <= m; j++)  //??????
		{
			if(c[j] >= 10)
			{
				c[j]-=10;
				c[j + 1]++;
			}
		}
		if(!c[m + 1])    //???m??????????0? 
			m++;        
	}
	int o = 0;        //0????????????
	for(i = 199; i >= 0; i--)
	{
		if(c[i])      //???????
		{
			cout << c[i];
			o = 1;
		}
		else if(o)    //??????????????????
			cout << c[i];
	}
	cout << endl;
	return 0;
}

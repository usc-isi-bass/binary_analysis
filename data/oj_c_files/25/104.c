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
//*????????N??                         *
//*?  ?????                                *
//*?  ??1000012806                            *
//*?????2010.12.17                          *
//************************************************
int main()
{
	int N, i, j, flag = 0;                       //i,j,??????flag???
	cin>>N;
	int a[100] = {0};                            //???????
	a[99] = 1;                                   //????????
	for (j = 1; j <= N; j++)
	{
		for (i = 99; i >= 0; i--)                //?????????
		{

			if (a[i] * 2 >= 10)                  //????????flag???
			{
				a[i] = a[i] * 2 + flag - 10;
				flag =  1;
			}
			else                                 //????flag???
			{
				a[i] = a[i] * 2 + flag;
				flag = 0;
			}
		}
	}
	for (i = 0; i <= 99; i++)
	{
		if (a[i] != 0)                           //???????????
		{
			j = i;
			break;
		}
	}
	for (i = j; i <= 99; i++)                    //??????????????
	{
		cout<<a[i];
	}
	return 0;
}


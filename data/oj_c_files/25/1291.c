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

//***************************************************
//*    name: 5.cpp                                  *
//*    author:??                                  *
//*    date: 2013-11-16                             *
//*    description: ??2?N??                    *
//***************************************************
int main ()
{
	int n , i , j , num[100] ={0};
	cin >>n ;
	num[0] = 1 ;//?1???
	for(i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
			num[j] = num[j] * 2 ;//
		for (j = 0 ; j < 100 ; j++)
		{
			if(num[j] >= 10)
			{
				num [j]= num[j]-10;
				num [j+1]++ ;
			}
		}
	}
	for(j = 99 ; j >= 0 ; j--)
	{
		if(num[j] == 0)
			continue ;
		break ;
	}
	while (j >= 0)
	{
		cout << num [j];
		if(j % 50==0)
			cout << endl;
		j-- ;
	}
	return 0 ;
}


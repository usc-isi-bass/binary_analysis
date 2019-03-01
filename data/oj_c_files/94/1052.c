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

/*
 * T1.cpp
 *
 *  Created on: 2012-11-4
 *      Author: ??
 *      Function: ??????
 */

int main()
{
	int n,a[510],i,temp;
	cin >>n;
	for (i = 0;i < n;i ++)     //?????
		cin >>a[i];
	for (i = 0;i < n;i ++)    //???????????0
	{
		if (a[i] % 2 == 0)a[i] = 0;
	}
	for (i = 0;i < n-1;i ++)    //????????????????0????????
		for (int j = i+1;j < n;j ++)
		{
			if (a[j] < a[i]){temp = a[i];a[i] = a[j];a[j] = temp;}
		}
	for (i = 0;i < n;i ++)    //????
	{while (a[i] != 0)
	  {
		if (i == n-1)
			{cout <<a[n-1] <<endl;break;}
		else
			{cout <<a[i] <<",";break;}
	  }
	}
	return 0;
}
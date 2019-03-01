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

int main()
{
	int n,a[100] = {0},i,ii = 0,b[100] = {0};
	cin >> n;                                   //??n
	a[0] = 1;

	for (i = 0;i < n;i++)                       //??n?
	{
		for (ii = 0;ii < 100;ii++)
			b[ii] = 0;
		for (ii = 0;ii < 100;ii++)              //????2
		{
			a[ii] = a[ii] * 2;
			if (a[ii] >= 10)                      //??????
			{
				b[ii + 1] = 1;
				a[ii]-= 10;
			}
		}                                       
		for (ii = 0;ii < 100;ii++)              //????
			a[ii]+= b[ii];
	}
	for (i = 99;a[i] == 0;i--);                 //??????????
	while (i >= 0)                              //????
	{
		cout << a[i];
		i--;
	}
	return 0;
}
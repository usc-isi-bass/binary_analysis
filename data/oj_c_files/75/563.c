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

/*****************
*file:5.cpp
*author:?? 
*time:2013-10-30
*description:?????????? 
*******************/
int main()
{
	int n = 0, i = 1, j = 1, max = -1000, x;
	int a[1000], b[1000], c[1000]={0}; //?? c???????????? 
	cin >> a[0];
	while (scanf(",%d",&x)>0)
	{
		a[i] = x;
        n++;
		i++;
	}//????a 
	cin >> b[0];
	while (scanf(",%d",&x)>0)
	{
		b[j] = x;
		j++;
	}//????b 
	for (int k = 0; k < i; k++)
	{
		for (int p = a[k]; p < b[k]; p++)
		{
			c[p]++;
		}
	}//??????????????? 
	for (int k = 1; k < 1000; k++)
	{
		if (max < c[k])
			max = c[k];
	}//??????????? 
	if (n == 0)//??????????????????1 
	{
		cout << "1 1";
	}
	else //????1??? 
	{
		cout << n + 1 << ' ' << max;
	}
	return 0;
}
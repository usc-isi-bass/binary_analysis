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
 * file    homework 9_7
 * author  ??
 * date    2010-11-24
 * description
           ???????????????????????
*/



int main()
{
	int s[1000] = {0};
	int	n, a, b, i, max = 0;
	cin >> a;
	n = 1;
	for (i = a; i < 1000; i ++)
		s[i] ++;
	while(cin.get() == ',')
	{
		cin >> a;
    	for (i = a; i < 1000; i ++)
     		s[i] ++;
		n ++;
	}
    cin >> b;
	for (i = b; i < 1000; i ++)
		s[i] --;
	while(cin.get() == ',')
	{
		cin >> b;
    	for (i = b; i < 1000; i ++)
	    	s[i] --;
	}
	for (i = 0; i < 1000; i ++)
		if (s[i] > max) 
			max = s[i];
	cout << n << ' ' << max << endl;

	return 0;
}

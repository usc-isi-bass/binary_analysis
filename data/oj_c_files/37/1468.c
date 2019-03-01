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
 * 1.cpp
 *
 *  Created on: 2012-11-25
 *      Author: Administrator
 */
int main()
{
	int t, i, j = 0;
	int b[125] = {0};
	char a[100050];
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		cin >> a;
		memset (b, 0, sizeof(b));
		j = 0;

	while(a[j] != '\0')
	{
		b[a[j]]++;
		j++;
	}
	j = 0;
	while(a[j] != '\0')
	{
		if(b[a[j]] == 1)
		{
			cout << a[j] << endl;
			break;
		}
		j++;
	}
	int len = strlen(a);
	if (j == len)
	    cout << "no" << endl;
	}
	return 0;


}

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

//**********************
//file homework 5      *
// author ??         *
//data 10/10/29        *
// ?? ??????? *
//**********************

int main ()
{ 
	int i, n, j, c;
	int a[20000] = {0};
	cin >> c;
	for(i = 0;i < c;i ++)
	{cin >> a[i];}
	cout<<a[0];
	for(n = 1; n < c; n ++)
	{
		for(j = n - 1; j >= 0; j --)
		{if (a[j] == a[n])
		break;
		else
			continue;
		}
		if (j == -1)
			cout<<" "<<a[n];
	}

	return 0 ;
}
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
 * Filename:parctice_fibonacciarray.cpp
 * Author: Wu Yiming
 *  Created on: 2011-11-2
 *  Function: find certain number in Fibonacii array
 */



int main()
{
	int n,pos,i;
	cin>>n;
	int fib[21]={1,1};
	while (n)
	{
		cin>>pos;
		for(i=2;i<pos;i++)
			fib[i]=fib[i-1]+fib[i-2];
		cout<<fib[i-1]<<endl;
		n--;
	}
	return 0;
}

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

//********************************************************
//*  ???:1.cpp                                        *
//*  ??????    1200012948                          *
//*  ????: 2012 10 22                                *
//*  ????:??????                               *
//********************************************************
//??
int main()
{   //?i?j?????
    int m, n, i, j, b;
    cin >> m;                          //????m
    for (n = 3; n <= m/2; n = n + 2)   //n???3
    {
    	for (i = 2; i <= n - 1; i++)   //???n
    	{
    		if (n % i == 0)
    			break;
    	}
    	if (i == n)
    	{
    		b = m - n;
    		for (j = 2; j <= b - 1; j++)
    	{
    		if (b % j == 0)
    		    break;
    	}
    	if (j == b)                      //??b?????
    		cout << n << " " << b << endl;
    	}
    }
    //??
    return 0;

}

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

//****************************************************************
// ????1000012789_2.cpp                                      *
// ???wusy                                                    *
// ???10?27                                                  *
// ???                                                *
//****************************************************************
int main()
{	 	
	int n, a[20001]; 
	cin >> n;

	for(int i = 0; i <= n-1; i++)
		cin >> a[i]; 
	for(int j = 0; j <= n-1; j++)
		for(int k = n-1; k >= j+1; k--)
		{
			if(a[j] == a[k])
				a[k] = 0;
		}
		cout << a[0];
		for(int m = 1; m <= n-1; m++)
		{
			if(a[m] != 0)
				cout << " " << a[m];
		}
		return 0;
}


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

//***********************************************************
//*    name: 2.cpp                                          *
//*    author:??                                          *
//*    date: 2013-10-30                                     *
//*    description?????????                        *
//***********************************************************
int main()
{
	int n,k,i,j,count=0 ;
	cin >> n ;
	int a[1000000];
	for (i = 0; i < n ; i++)
		cin >> a[i];
	cin >> k;
	for(i = 0; i < (n-count) ; i++)
	{
		if (a[i] == k)
		{
			for(j=i ;j<n-1;j++)
			{
				a[j]=a[j+1] ;
			}
			i--;
			count++ ;
		}

	}
	i=0 ;
	while(i < n-count-1)
	{
		cout << a[i] << ' ' ;
		i++;
	}
	cout << a[n-count-1] ;
	return 0 ;
}



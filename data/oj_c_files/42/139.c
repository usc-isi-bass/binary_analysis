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

/**
 *  ????1027.cpp
 *  ?????????
 *  ??????
 *  ???2010.10.27
 */


int main()
{
	int n,i,j,k;
	int a[100000]={0};
	j=0;

	cin >> n;
	for (i=0;i<=n-1;i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for (i=0;i<=n-1;i++)
	{
		if (a[i]!=k)
		{
			
			a[j]=a[i];
			j++;
		}
	}
	cout << a[0];
	for (i=1;i<=j-1;i++)
	{
		cout << " " << a[i];
	}
	return 0;
}
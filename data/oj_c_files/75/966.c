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

//********************************
//*??  ?????          *****
//*????? 1300012753     ***** 
//*???2013.10.30          *****   
//********************************
int main()
{
	int a[1001], b[1001], i = 1, sum = 0, max = 0;   // a?????????b??????i????sum????????max?????? 
	char c;                                          // c????? 
	while (cin >> a[i])
	{
		c = cin.get();
		if(c != ',')
		break;
		i++;
	}
	cin >> b[1];
	for(int j = 2; j <= i; j++)
	{
		c = cin.get();
		cin >> b[j];
	}
	
	// ?????????k????????? 
	for (int k = 1; k <= i; k++)
	{
		for (int t = 1; t <= i; t++)
		{
			if(a[k] >= a[t] && a[k] < b[t])
			sum++;
		}
		
		// ???k?????sum????????????? 
		if(max < sum)
		max = sum;
		sum = 0;          //  sum????0 
	}
	cout << i << ' ' << max;
	return 0;
} 
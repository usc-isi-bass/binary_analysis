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
//*????????   **
//*?????? 1300012861 **
//*???2013.10.31  **
//********************************
int main()
{
	int x[1002], y[1002], z[1002] = {0}, i, j, count, t; 
	char c; 
	count = 1; 
	i = 1; 
	cin >> x[0];
	c = cin.get(); //??????
	while ( c == ',' ) //???????????????
	{
		count++; //??+1
		cin >> x[i];
		c = cin.get(); //??????
		i++; 
	}
	i = 1; //????
	cin >> y[0];
	c = cin.get(); 
	while ( c == ',' )
	{ 
		cin >> y[i];
		c = cin.get(); 
		i++; 
	}
	i--; 
	for ( ; i >= 0; i-- )
	{
		for ( j = x[i]; j < y[i]; j++ ) //??????????????+1
			z[j]++; 
	} 
	for ( j = 1; j <= 1000; j++ )
	{
		if ( z[j] < z[j-1] ) //????z????? ????????????
			z[j] = z[j-1]; 
		t = z[j]; 
	}
	cout << count << " " << t << endl; 
	return 0;
}


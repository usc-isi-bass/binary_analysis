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
//*?????2?N??  **
//*????? 1300012845 **
//*???2013.11.15  **
//********************************
int main ()
{
	int n, i, p, j, k;
	int flag = 0;
	int num[51]= {0};
	cin >> n;
	num[1] = 1;
	flag = 0;
	if ( n==1 )//n==1?????
	{
		cout << "2" ;
		return 0;
	}
	for ( i = 1; i <= n; i++ )
	{
		for ( j=1; j <= 40; j++ )
			num [j] = num[j] * 2;//????*2
		for ( k = 2; k <=50; k++ )
		{
			num[k]+= num[k-1]/10;//??
			num[k-1] = num[k-1] % 10;//???????10
		}
	}
	for ( j = 50; j >= 1; j-- )
	{
		if ( num[j] != 0)//???0???2?n??????0
			flag = 1;	
		if ( flag == 1 )
			cout << num[j] ;//??
	}
	cout<< endl;
	return 0;
}

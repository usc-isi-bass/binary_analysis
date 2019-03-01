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

//******************************************
//*  ??????????                  *
//*  ??????                          *
//*  ?????2011?10?27?              *
//******************************************
int main()
{
	int k , m , n , a[100][100] , sum , p , q;
	int i , j , h;
	cin >> k;//k???k?????
	for(h = 1;h <= k;h ++)
	{
		cin >> m >> n; 
		p = 0;//p??????????,??????0
		q = 0;//q???????????????
		for(i = 1;i <= m;i ++)
		{
			for(j = 1;j <= n;j ++)
			{
				cin >> a[i][j];//????????????
				p = p + a[i][j];//????
			}
		}
		for(i = 2;i < m;i ++)
		{
			for(j = 2;j < n;j ++)
				q = q + a[i][j];//????????
		}
		sum = p - q;//sum??????????
		cout << sum << endl;
	}
	return 0;
}
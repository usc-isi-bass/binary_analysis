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

/**************************************************
?? ???1300017667
?? 20131030
?? ????????
**************************************************/
int main()
{
	int n, i, j, k, count = 0;
	int num[100000] = {0};				//???????????100000??
	cin >> n;
	for(i = 0; i <= n - 1; i ++)		//???????
		cin >> num[i];
	cin >> k;
	for(i = 0; i <= n - 1; i ++)
	{
		if(num[i] == k)					//??????????????????????????????
		{
			for(j = i; j < n - 1; j ++)
				num[j] = num[j + 1];
			i --;						//????????????????????
			n --;						//?????1
		}
	}
	for( i = 0; i <= n - 1; i ++, count ++)
	{
		if(count != 0)					//????????????????????????
			cout << " ";
		cout << num[i];
	}
	return 0;
}

	

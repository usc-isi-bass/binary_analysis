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

/**********************************
?? ???1300017667
?? 20131114
?? 2?n?????????
**********************************/
int main()
{
	int n, i, j, flag = 0;				//flag???????????
	cin >> n;
	short int num[35] = {1, 0};			//100 * log2 < 35
	for(i = 1; i <= n; i ++)			//n????????2?n??
	{
		for(j = 0; j <= 34; j ++)		
		{
			num[j] = num[j] * 2 + flag;	//???????????????????????
			if(num[j] >= 10)			//?????????????????????????????1
			{
				num[j] = num[j] - 10;
				flag = 1;
			}
			else
				flag = 0;				//???????????????0
		}
	}
	for(j = 34; num[j] == 0; j --);		//?????????????????????????
	for(; j >= 0; j --)					//????????????????????????????
		cout << num[j];
	return 0;
}




		

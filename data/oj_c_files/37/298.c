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
* @file 1000012853_2
* @author 1000012853 ??
* @date 2010?11?19
* @desc ????????????
*/
int main()
{
	int n, i, j, m, len, count[26];
	char a[100000];
	cin >> n;
	cin.get();                                     //????\n
	for(m = 1; m <= n; m ++)
	{
		memset(count,0,sizeof(count));             //count?0
		//memset(a,0,sizeof(a));                     //a?0
		cin.getline(a,100000);
		len = strlen(a);                           //a???
		for(i = 0; i < len; i ++)
		{
			count[a[i] - 'a'] ++;                  //???????????
		}
		for(j = 0; j < len; j ++)
		{
			if (count[a[j] - 'a'] == 1)           //?????????????????
			{
				cout << a[j] << endl;
				break;
			}
		}
		if(j == len)                             //?????????no
			cout << "no" << endl;
	}
	return 0;
}
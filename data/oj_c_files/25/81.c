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

// *********************************
// ****  file ??2?N??.cpp  ****
// ****  ID:1000012895          ****
// ****  Author ???          ****
// ****  2010/12/15             ****
// *********************************
int main()
{
	int i, j, n, num[40], *p = NULL;    // num???????????????num[0]????????
	memset(num,0,160);                  // ??num???
	num[0] = 1;                         // ????????????000��01?????
	cin >> n;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 40; j++)         // ??????
			num[j] *= 2;
		for(j = 0; j < 40; j++)         // ????
		{
			
			if(num[j] > 9)
			{
				num[j+1]++;
				num[j] -= 10;
			}
		}
	}
	p = num + 38;                         // ????????
	while(*(--p) == 0);                   // ???????????????
	while(p >= num)                       // ????????????????
	{
		cout << *p;
		p--;
	}
	cout << endl;
	return 0;
}
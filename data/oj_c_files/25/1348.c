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

int main()
{
	int n , i , j; 
	int start;
	cin >> n;
	int num[101] = {0}; //??num????????
	num[100] = 1;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= 100; j++)//?????????2
		{
			num[j] = num[j] * 2;
		}
		for(j = 1; j <= 100; j++)//????10??????????-10
		{
			if(num[j] >= 10)
			{
				num[j] = num[j] - 10;
				num[j - 1]++; 
			}
		}
	}
	//????????? 
	for(i = 1; ; i++)
	{
		if(num[i] != 0)
		{
			start = i;
			break;
		}
	}
	// ???? 
	for(i = start; i <= 100; i++)
	cout << num[i];
	return 0;
}
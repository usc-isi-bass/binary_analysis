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

//***********************
//*?????2?N??****
//*??????**********
//*???1000012832******
//***********************
int shumu(int a[]);//????shumu ????????????
int main()
{
	int N, a[100], i, m, j;
	cin >> N;
	memset(a, 0, sizeof a);//?????
    a [0] = 2;//?a[0]???
	if(N == 0)//??0??????1
	{
		cout << 1 << endl;
	}
	else if(N == 1)//??1??????2
	{
		cout << 2 << endl;
	}
	else
	{
		for(i = 1; i <= N - 1; i++)//??N???2????????N-1?2
		{
			m = shumu(a) + 1;//????????????
			for(j = 0; j < m; j++)
			{
				a[j] = a[j] * 2;//?????????2
			}
			for(j = 0; j < m; j++)
			{
				if(a[j] >= 10)//????10?????
			{
				a[j + 1]++;
				a[j] = a[j] - 10;
			}
		}
	}
    if(a[m] == 0)//?????M+1????0
	{
		for(i = m - 1; i >= 0; i--)//??m???
		{
			cout << a[i];
		}
		cout << endl;
	}
	else if(a[m] != 0)//???1
	{
		for(i = m; i >= 0; i--)//??M+1???
		{
			cout << a[i];
		}
		cout << endl;
	}
	}
	return 0;
}
int shumu(int a[])
{
	int k;
	for(k = 99; a[k] == 0; k--)
	{
	}
	return k;
}
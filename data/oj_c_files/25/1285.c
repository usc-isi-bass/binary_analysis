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
//*??2?N??                 **
//*????? 1300012848        **
//*???2013.11.16             **
//********************************
int main()
{
	const int MAX_LEN = 200;
	int n, i, j, k = MAX_LEN;
	int a[MAX_LEN + 1];
	memset(a,0,sizeof(a)); //????
	cin >> n;
	if (n == 0)
		cout << "1" << endl; //2?0???1
	else
	{
		a[0] = 1;
		for (i = 1; i <= n; i++) //????n?
		{	
			for (j = 0; j < MAX_LEN; j++) //??????????
				a[j] = a[j] * 2;
			for (j = 0; j < MAX_LEN; j++) //???????????????
				if(a[j] >= 10)
				{
					a[j] = a[j] % 10; //???10??
					a[j+1]++; //?????
				}
		}
	while (a[k] == 0)
		k--;
	for(; k >= 0; k--)
	cout << a[k]; //????? ????????0?? ????
	}
	return 0;
}
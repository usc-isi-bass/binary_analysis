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

char b[100001];
int main()
{
	
	int a[26];
	int flag = 0, i, t, j;

	cin >> t;
	for(j = 1; j <= t; j ++)
	{
		cin >> b;
		memset(a, 0, sizeof(a));
		for(i = 0; b[i] != '\0'; i ++)
		{
			a[b[i] - 'a'] ++;
		}
		
		flag = 0;
		for(i = 0; b[i] != '\0'; i++)
		{
			if(a[b[i] - 'a'] == 1)
			{
				flag = 1;
				cout << b[i] << endl;
				break;
			}
		}

		if(flag == 0)
			cout << "no" << endl;
	}




	return 0;
}
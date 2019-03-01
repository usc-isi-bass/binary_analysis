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
	int t, i, j, b[26], x, flag;
	char a[100000];
	cin >> t;	
	for(i = 0; i < t; i++)
	{
		flag = 0;
		cin >> a;
		for(j = 0; j < 26; j++)
			b[j] = 0;
		for(j = 0; j < strlen(a); j++)
		{
			x = a[j] - 'a';
			b[x]++;
		}
		for(j = 0; j < strlen(a); j++)
		{
			if(b[a[j] - 'a'] == 1)
			{
				cout << a[j] << endl;
				flag = 1;
				break;
			}		
		}
		if(flag == 0)
		cout << "no" << endl;
	}	
	return 0;
}
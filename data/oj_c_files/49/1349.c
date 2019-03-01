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

//2014.1.2
//zwb

int main ()
{
	int i, j, k, flag = 0;
	char a[501] = {'\0'};
	cin >> a;
	int len = strlen(a);
	for(i = 2; i <= len; i++)
	{
		for(j = 0; j <= len - i; j++)
		{
			flag = 0;
			for(k = j; k <= i / 2 + j; k++)
			{
				if(a[k] != a[i+j+j-1-k])
				{
					flag = 1;
					break;
				}
			}	
			if(flag == 0)
			{
				for(k = j; k <= i + j - 1; k++)
				{
					cout << a[k];
				}
				cout << endl;
			}
		}
	
	}
	return 0;
}

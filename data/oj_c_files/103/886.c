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
	char a[1010];
	cin>>a;
	int i = 0;
	int count = 1;
	while( a[i] != '\0' )
	{
		if(a[i+1] == a[i] || a[i+1] - 'a' == a[i] - 'A' || a[i+1] - 'A' == a[i] - 'a' )	
		{
			count ++;
		}
		else
		{
			if(a[i] >= 'a' && a[i] <= 'z')
			{
				cout<<'(';
				cout<<(char)('A' + a[i] - 'a')<<',';
				cout<<count;
				cout<<')';
				count = 1;
			}
			else
			{
				cout<<'(';
				cout<<a[i]<<',';
				cout<<count;
				cout<<')';
				count = 1;
			}
		}
			i++;
	}
	cout<<endl;
	
	return 0;
}

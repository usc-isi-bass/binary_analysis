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
	char a[105] = {0},b[105] = {0},c[105] = {0};
	int len;
	int i = 0,j = 0;
	while(cin >> a)
	{
		//cin.get(a,100);
		len = strlen(a);
		for( i = 0;i<len;i++)
			c[i] = a[i];
		for(i = 0;i<len;i++)
		{
			if(c[i] == ')')
			{
				for(j = i;j>=0;j--)
				{
					if(c[j] == '(')
					{
						c[i] = '.';
						c[j] = '.';
						break;
					}
				}
				if(j == -1)
				{
					b[i] = '?';
				}
			}
		}
		for(i = 0;i<len;i++)
		{
			if(c[i] =='(')
				b[i] = '$';
		}
		cout << a << endl;
		for(i = 0;i<len;i++)
		{
			if(b[i]!='$'&&b[i]!='?')
				cout << ' ';
			else
				cout << b[i];
		}
		cout << endl;
		i = 0;
		j = 0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
	}
	return 0;
}			



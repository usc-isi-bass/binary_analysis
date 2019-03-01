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
	int t,flag = 0,f= 0;
	char str[100000];
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		f = 0;
		cin >> str;
		int t0 = strlen(str);
		for(int i = 0; i < t0;i++)
		{
			flag = 0;
			for(int j = i+1;j<t0;j++)
			{
				if(str[i] == str[j])
				{
					flag = 1;
					str[j] = '1';
				}
			}
			if(flag == 1)
			{	
				continue;
			}
			if(flag == 0&&str[i]!='1')
			{
				cout << str[i] << endl;;
			    f = 1;
			    break;
			}
		}
		if(f == 0)
			cout << "no" << endl;
	}
	return 0;
}
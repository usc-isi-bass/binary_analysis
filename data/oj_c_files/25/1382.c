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
	int n;
	cin >> n;
	char c[50];
	c[49] = '1';
	for(int i =0 ;i<49;i++)
		c[i] = '0';
	for(int i = 0;i<n;i++)
	{
		int t = 0;
		for(int j = 49;j>0;j--)
		{
			c[j] += c[j]+t-'0';
			if( c[j] > '9')
			{
				c[j] -= 10;
				t = 1;
			}
			else
				t =0;
		}
	}
	int i = 0;
	while(c[i] <='0')
		i ++;
	for(int j = i; j < 50;j++)
		cout<<c[j];
	cout<<endl;
	return 0;
}
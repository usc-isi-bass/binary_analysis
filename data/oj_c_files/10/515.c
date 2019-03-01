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
	int k,a[26],r[26];
	cin >> k;
	for(int i = 0;i<26;i++)
		a[i] = 0;
	for(int i = 0;i<26;i++)
		r[i] = 1;
	for(int i = 0;i<k;i++)
		cin >> a[i];

	for(int i= 0;i<k;i++)
	{
		if(i == 0)
			r[i] = 1;
		else
		{
			for(int j = 0; j < i;j++)
			{
				if(a[j] >=a[i] && r[j] >= r[i])
				{
					r[i] = r[j]+1;
				}
			}
		}
	}
	int s = 0;
	for(int i = 0; i<k;i++)
	{
		if(r[i]>s)
			s=r[i];
	}
	cout << s << endl;
	
	return 0;
}
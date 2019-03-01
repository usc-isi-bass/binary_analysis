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
	int a[20001]={0};
	int n, i, j, k, p, num=0;
	cin >> n;
	for(i=1; i <= n; i++) 
	{
		cin >> a[i];
	}
	for(j=1; j <= n-1; j++)
	{
		for(k=j+1; k <= n; )
		{
			if(a[j] == a[k])
			{
				for(p=k; p <= n-1; p++)
				{
					a[p]=a[p+1];
				}
				n--; 
			}
			else
			{
				k++;
			}
		}
	}
	for(i=1; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[n] <<endl;
	return 0;
} 
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
	int N, i, j, l, a[32];
	for(i=0; i<32; i++)
	{
		a[i]=0;
	}
	cin >> N; 
	a[31]=1;
	if(N == 0)
		cout << 1 << endl;
	else
	{
		for(i=1; i <= N; i++)
		{
			j=0;
			while(a[j] == 0)
			{
				j++;
			}
			l=32-j;
			for(j=31; j >= 32-l; j--)
			{
				a[j] *= 2;
			}
			for(j=31; j >= 32-l; j--)
			{
				if(a[j] >= 10)
				{
					a[j-1] += a[j]/10;
					a[j]=a[j]%10;
				}
			}
		}
		i=0;
		while(a[i] == 0)
		{
			i++;
		}
		for( ; i<32; i++)
			cout << a[i];
		return 0;
	}
}
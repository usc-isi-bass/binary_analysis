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

/**********************
*????
*?????
***********************/
int main()
{
	int n, m, a[100]={0},b[100]={0};
	cin >> n >> m;
	for(int i=0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int j=0; j < m; j++)
	{
		for(int k=0; k < n; k++)
		{
			if(k > 0)
			{
				b[k]=a[k-1];
			}
			else
			{
				if(k == 0)
				{
					b[k]=a[n-1];
				}
			}
		}
		for(int i2=0; i2 < n; i2++)
		{
			a[i2] = b[i2];
		}
	}
	int mark=0;
	for(int i1=0; i1 < n; i1++)
	{
		if(mark == 0)
		{
			cout<<b[i1];
			mark++;
		}
		else
		{
			cout<<" "<<b[i1];
		}
	}
return 0;
}
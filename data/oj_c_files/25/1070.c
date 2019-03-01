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
	int a[50],n;
	memset(a,0,sizeof(a));
	a[0]=1;
	cin>>n;
	while (n--)
	{
		for (int i=0;i<49;i++)
		{
			a[i] *= 2;
		}
		for (int i=0;i<49;i++)
		{
			while (a[i]>9)
			{
			    a[i] -= 10;
				a[i+1]++;
			}
		}
	}
	n=49;
	while (a[n]==0)
		n--;
	for (int i=n; i>=0;i--)
		cout<<a[i];

	return 0;
}
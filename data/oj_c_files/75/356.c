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
	int n,p,i=1,j,k=1,l,a[1002],b[1002],count,max1=0;  //n?????p????????
	char c;
	do
	{	
		cin >> a[i];
		c=cin.get();
		i++;
	} while (c==',');
	p=i-1;
	i=1;
	do
	{
		cin >> b[i];
		c=cin.get();
		i++;
	} while (c==',');
	int max=0,min=1004;
	for (i=1;i<=p;i++)
	{
		if (a[i]<min)
			min=a[i];
	}
	for (i=1;i<=p;i++)
	{
		if (b[i]>max)
			max=b[i];
	}
	for (i=min;i<=max;i++)
	{
		count=0;
		for (j=1;j<=p;j++)
		{
			if (a[j]<=i&&b[j]>=(i+1))
				count++;
		}
		if (count>max1)
			max1=count;
	}
	cout << p << " " << max1 << endl;
	return 0;
}
		
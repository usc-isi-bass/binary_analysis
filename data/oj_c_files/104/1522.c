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
	int x[1000],y[1000],i,j,k,p,m;
	cin >> x[1] >> y[1];
	i=2;
	j=2;
	while(x[i-1]!=1)
	{
		x[i]=x[i-1]/2;
		i++;
	}
	while(y[j-1]!=1)
	{
		y[j]=y[j-1]/2;
		j++;
	}
	m=0;
	for(k=1;k<=i-1;k++)
	{
		if(m==0)
		{
		for(p=1;p<=j-1;p++)
		{
			if(y[p]==x[k])
			{
				cout << x[k];
				m=1;
				break;
			}
		}
		}
		else
			break;
	}
	return 0;
}


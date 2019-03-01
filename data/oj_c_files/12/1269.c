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
	int a[16], i, b, j, k, m;
	a[1]=1;
	while (a[1]!=-1)
	{
		i=1;
		m=0;
		while (cin >> b)
		{
			a[i]=b;
			if(a[i]==0||a[i]==-1)
			break;
			i=i+1;
		}
		for (j=1;j<=i-1;j++)
		{
			for (k=1;k<=i-1;k++)
			{
				if (a[j]==2*a[k])
					m++;
			}
		}
		if (a[i]!=-1)
		cout << m << endl;
	}
	return 0;
}

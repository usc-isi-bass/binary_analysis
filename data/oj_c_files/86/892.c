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
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
	{
		int a[10];
		int j;
		cin >> a[0];
		for(j=1;j<=a[0];j++)
			cin >> a[j];
		if(a[0]==0)
			cout << 60 << endl;
		else
		{
			for(j=1;j<=a[0];j++)
				if(a[j]+3*j>=60 && a[j]+3*j<=63)
				{cout << a[j] << endl;break;}
				else
					if(a[j]+3*j>63)
					{cout << 63-3*j << endl;break;}
			if(j==a[0]+1)
				cout << 60-3*a[0] << endl;		
		}
	}
	return 0;
}

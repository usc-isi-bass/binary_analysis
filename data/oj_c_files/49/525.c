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
	char a[501]; int  i,j,k,t,m,n;
	cin>>a;
	t=strlen(a);
	for (k=1;k<=t-1;k++)
	{
		for (i=0;i<t-1;i++)
			if (i+k<t&&a[i]==a[i+k])
			{
				for (m=i,n=i+k;m<n;m++,n--)
					if (a[m]!=a[n]) break;
				if (m>=n)
				{for (j=i;j<=i+k;j++)
					cout<<a[j];
				cout<<endl;
				}
			}
	}
	return 0;
}

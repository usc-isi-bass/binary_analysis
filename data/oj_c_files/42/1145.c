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
	int n=0,k=0,a[150000],i=0,j=0,temp=0,m=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;

	for (i=0;i<n-m;i++)
	{
		if (a[i]!=k)
			continue;
		else if (a[i]==k)
		{
			for (j=i;j<n-m;j++)
			{
				a[j]=a[j+1];//???????????
			}
			m++;
			i--;//??i????????????????????????????????????????????????i--??????i?????
		}
	}
	for (i=0;i<(n-m);i++)
	{
		if (i<(n-m-1))
			cout<<a[i]<<" ";//???????
		else if (i==(n-m-1))
            cout<<a[i]<<endl;//???????
	}
	return 0;
}
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
	int n,i,j,a[20000],flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(flag==0)
		    cout<<a[0];
		flag=1;
		for(j=0;j<i;j++)
		{
			if(a[j]==a[i])
				break;
			if(j==i-1&&a[j]!=a[i])
				cout<<" "<<a[i];
		}
	}
	return 0;
}
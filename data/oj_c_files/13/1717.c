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
	int a[200000],n,m,i,j;
	cin >>n;
	for(i=0;i<n;i++)
	{
		cin >>a[i];
	}
	i=0;
	while(i<n)
	{
		m=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&&i>j)
			{
				m=m+1;
			}
		}
        if(m==0&&i==0)
		     cout<<a[i];
	    if(m==0&&i!=0)
		     cout<<' '<<a[i];
		i=i+1;
	}
	return 0;
}




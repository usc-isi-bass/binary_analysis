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
	int i,n,m,a[5];
	cin>>n;
    if(n==0)
		cout<<0;
	else
	{
		{
			for(i=0;n>0;i++)
			{  
				a[i]=n%10;
				n=n/10;
			}
	    }
	m=i;
	for(i=0;i<m;i++)
		cout<<a[i];
	}
	return 0;
}

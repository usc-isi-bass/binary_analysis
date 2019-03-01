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
	int n,k,m,j;
	cin>>n>>k;
	for(int i=1;;i++)
	{
		m=i*n+k;
		for(j=1;j<n;j++)
		{
			if(m%(n-1)==0)
			m=m*n/(n-1)+k;
			else
			break;
		}
		if(j==n)
		break;
	}
	cout<<m;
	
	return 0;
}

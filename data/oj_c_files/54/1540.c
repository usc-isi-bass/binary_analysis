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
	int n,k,s,m=1,g=0;             
	cin>>n>>k;
	for(m=1;g!=n;m++)
	{
		g=0;
		s=m;
		for(int i=0;i<n;i++)
	    {
			if(m%(n-1)==0)
            {
				m=m*n/(n-1)+k;
			    g++;
				if(g==n)
		{
			cout<<m;
	        break;
		}
			}
			else
				break;
	    }
		m=s;
	}
	return 0;
}
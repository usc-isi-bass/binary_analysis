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
	int n,i,m,a[20],j,s,k,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		if(m==0)
		{
			s=60;
		}
		else
		{
		    for(j=0;j<m;j++)
		    {
			    cin>>a[j];
		    }
			for(k=m-1;;k--)
			{
				if(a[k]+3*(k+1)<=63)
				{
					break;
				}
			}
			t=a[k]+3*k;
			if(t<57)
			{
				s=a[k]+(57-t);
			}
			else
			{
				s=a[k];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
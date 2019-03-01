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
	char a[550];
	int i,j,k,t,m,n;
	i=0;
	while(cin.get(a[i]))
	{
		if(a[i]=='\n')
		{
			t=i-1;
			break;
		}
		else
			i++;
	}
	t=i-1;
	for(j=1;j<(t+1)/2;j++)
	{
		for(i=0;i<t;i++)
		{
			m=0;
		    for(k=0;k<j;k++)
		    {
				if(i+2*j-k-1<=t)
				{
					if(a[i+k]==a[i+2*j-k-1])
					{
						m++;
					}
				}
			}
			if(m==j)
			{
				for(n=i;n<i+2*j;n++)
				{
					cout<<a[n];
				}
				cout<<endl;
			}
		}
	}
	 
	return 0;
}


			 

	